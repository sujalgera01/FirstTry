#include<stdio.h>
#include<string.h>
int main()
{
    int j;
    char string[100];
    scanf("%s",&string);
    for(j=strlen(string)-1;j>=0;j--)
    {
        printf("%c",string[j]);
    }
}