#include<stdio.h>
struct store
{
    char item[100];
    int freq[100];
    float price[100];
};
int main()
{
    int i,n;
    struct store s;
    printf("enter number of items");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %f",s.item[i],&s.freq[i],&s.price[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("%s %d %f",s.item[i],s.freq[i],s.price[i]);
    }
}