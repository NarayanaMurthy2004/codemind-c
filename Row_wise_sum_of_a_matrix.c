#include<stdio.h>
int main()
{
	int r,c,i,j,sum;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
	    sum=0;
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		     sum=sum+arr[i][j];
		}
		printf("%d ",sum);
    }
    
}