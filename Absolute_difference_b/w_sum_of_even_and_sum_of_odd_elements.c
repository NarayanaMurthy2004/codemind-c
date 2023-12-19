#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,add=0,diff;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       if(arr[i]%2==0)
       {
           sum=sum+arr[i];
       }
       else
       {
           add=add+arr[i];
       }
    }
    diff=abs(add-sum);
    printf("%d",diff);
     
}