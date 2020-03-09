#include<stdio.h>
int main()
{
	int n,i,m;
	int c[n];
	printf("enter number of elements in c");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",c[i]);
	}
	printf("enter the element for minimum distance: ");
	scanf("%d",&m);
}