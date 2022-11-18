#include<stdio.h>
#include<string.h>
int main()
{
    char a[101][1006]={},tem;
    int i=0,high,low;
    while(gets(a[i])!=NULL)
    {
        high=0;
        low=0;
        while(a[i][high]!='\0')
        {
            high++;
        }
        high--;
        for(;high>low;low++,high--)
        {
            tem=a[i][low];
            a[i][low]=a[i][high];
            a[i][high]=tem;
        }
        i++;
    }
    int n=i;
    for(i=n-1;i>=0;i--)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}