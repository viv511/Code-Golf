#import<iostream>
#define f(j,b) for(int j=1;j<b;j++)
int g[]={0,1000,900,500,400,100,90,50,40,10,9,5,4,1};char*h[]={"","M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};int main(int c,char*v[]){f(x,c){int s=atoi(v[x]);f(y,14){f(z,s/g[y]+1)std::cout<<h[y];s%=g[y];}puts("");}}