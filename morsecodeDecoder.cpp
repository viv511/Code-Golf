// 196 bytes
#import<cstdio>
int i,z,n;int main(int,char**v){for(v++;**v%32?n++:n?i+=i+n/6+1,z=n=0:z++?z-9||putchar(32):i=putchar("73168290*54ETIANMSURWDKGOHVF*L*PJBXCYZQ"[i>30?i%11:i+10])&0,**v?*(*v)++:!z;);}

// noticing that the digits take up a lot of wasted space. the BT is very effective for letters tho
// lets make it then this --> under a index we use a BT otherwise we use an index into the string
// 0: -----
// 1: .----
// 2: ..---
// 3: ...--
// 4: ....-
// 5: .....
// 6: -....
// 7: --...
// 8: ---..
// 9: ----.

// translate all of these into indexes from our original string:
// 31 (5), 32 (4), 34 (3), 38 (2), 46 (1), 47 (6), 55 (7), 59 (8), 61 (9) & 62 (0) 
// wrote a c++ program to find all pairwise diffs ==> 11 is the smallest diff that doesnt exist and has no multiples

// mod all by 11, then rearrange by ascending order:
// "73168290*54"

// then the lookup goes from direct [i] to [i>30?i%11+29:i]

// also can swap them to reduce count by removign the leading asterisk

// =========================================

// 207 bytes
// #import<cstdio>
// int i,z,n;int main(int,char**v){for(v++;**v%32?n++:n?i+=i+n/6+1,z=n=0:z++?z-9||putchar(32):i=putchar("*ETIANMSURWDKGOHVF*L*PJBXCYZQ**54*3***2*******16*******7***8*90"[i])&0,**v?*(*v)++:!z;);}

// 211 bytes
// #import<cstdio>
// int i,z,n;int main(int,char**v){for(v++;**v%32?n++:n?i+=i-~(n>6),z=n=0:z++?z-9||putchar(32):(putchar("*ETIANMSURWDKGOHVF*L*PJBXCYZQ**54*3***2*******16*******7***8*90"[i]),i=0),**v?*(*v)++:!z;);}

// OK BIG PROGRESS:
// go from while to a for: we can now drop "p", inline the "m" SINCE we can make the table used once (also -~x instead of x+1)

// 231 bytes
// #import<cstdio>
// int i,z,n;int main(int,char**v){char*p=v[1],*m="*ETIANMSURWDKGOHVF*L*PJBXCYZQ**54*3***2*******16*******7***8*90";do*p%32?n++:n?i+=i+(n>6)+1,z=n=0:(z++||putchar(m[i]),i=0,z-9||putchar(32));while(*p++);putchar(m[i]);}

// 242 bytes
// #import<cstdio>
// int i,z,n;main(int,char**v){char*p=v[1],*m="*ETIANMSURWDKGOHVF*L*PJBXCYZQ**54*3***2*******16*******7***8*90";do if(*p%32)n++;else n?i+=i+(n>6)+1,z=0,n=0:(z++||putchar(m[i]),i=0,z-9||putchar(32));while(*p++);putchar(m[i]);}

// 315 chars
// #import<iostream>
// #import<sstream>
// using namespace std;int i,z;int main(int,char**v){string m="*ETIANMSURWDKGOHVF*L*PJBXCYZQ**54*3***2*******16*******7***8*90",x;stringstream ss(v[1]);while(getline(ss,x,' ')){if(!x.size()){if(!z)cout<<m[i];z++;i=0;}else{i=i*2+((x.size()>6)?2:1);z=0;}if(z==9)cout<<" ";}cout<<m[i];}

/*

                       *
                   /       \
               E               T
             /   \           /   \
           I       A       N       M
          / \     / \     / \     / \ 
         S   U   R   W   D   K   G   O
        / \ / \ / \ / \ / \ / \ / \ / \ 
        H V F * L * P J B X C Y Z Q * *
        w/ numbers here too ^^

                        0
                   /       \
               1               2
             /   \           /   \
           3       4       5       6
          / \     / \     / \     / \ 
         7   8   9  10  11  12   13  14
        / \ / \ / \ / \ / \ / \ / \ / \
       15 ...                     ... 30


A leftward movement is equivalent to multiplying the index by 2 and adding 1
A rightward movement is equivalent to multiplying the index by 2 and adding 2

References:
https://stackoverflow.com/questions/28045172/morse-code-converter-in-c/28046691#28046691
https://nullprogram.com/blog/2020/12/31/
*/