#include<stdio.h>
#include<math.h>
int main()
{
    int n,c1,c2,t=0;
    scanf("%d%d%d",&n,&c1,&c2);
    t=t+(n)*c1+(n*(n-3)*c2)/2;
    printf("%d",t);
}