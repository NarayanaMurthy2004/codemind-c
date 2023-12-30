#include<stdio.h>
int main()
{
    int n,i,c=0,avg,t=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        t=t+arr[i];
    }
       avg=t/n;
     for(i=0;i<n;i++)
     {
         if(arr[i]==avg)
         {
             c++;
         }
     }
     if(c>=1)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
     
}
