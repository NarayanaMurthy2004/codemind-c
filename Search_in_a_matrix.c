#include<stdio.h>
int main()
{
    int r,c,i,j,n,t=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&n);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        if(arr[i][j]==n)
         t=t+1;
       }
   }
    printf("%d",t);
    
}