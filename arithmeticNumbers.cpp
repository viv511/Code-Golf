#import<ios>
float c,a;int i,j;int main(){for(i=1;i<=1e4;i++){c=2,a=i+1;for(j=2;j<i;j++)if(!(i%j))a+=j,c++;if(a/c==(int)(a/c))printf("%d\n",i);}}