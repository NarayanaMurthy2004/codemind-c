#include<stdio.h>
int main()
{
	int r,c,i,j,sum=0,add=0;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
    }
    for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
		  if(arr[i][j]%2==0)
		  {
		      sum=sum+arr[i][j];
		  }
		  else
		  {
		      add=add+arr[i][j];
		  }
		}
		
    }
    printf("%d ",sum);
		printf("%d",add);
    
    
}