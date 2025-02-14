#import<ios>
int i,a,b;int main(){for(;i<201;i++){for(a=0,b=2;b<i;b++)a>i?printf("%d\n",i),a=0:a+=i%b?0:b;}}