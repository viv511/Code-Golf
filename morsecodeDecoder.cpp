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