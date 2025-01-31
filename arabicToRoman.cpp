#import<iostream>
#define i int
#define f(j,a,b) for(i j=a;j<b;j++)
i g[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};char*h[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};i main(i c,char*v[]){f(x,1,c){i s=atoi(v[x]);f(y,0,13){f(z,0,s/g[y]){std::cout<<h[y];}s%=g[y];}puts("");}}