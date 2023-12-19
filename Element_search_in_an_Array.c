#include<stdio.h>
int main()
{
    int n,i,N,c;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&N);
    for(i=0;i<n;i++)
    {
        if(N==arr[i])
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}