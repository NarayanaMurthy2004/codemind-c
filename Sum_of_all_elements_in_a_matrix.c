	#include<stdio.h>
int main()
{
	int r,c,i,j,sum=0;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(j=0;j<r;j++)
	{
		
		for(i=0;i<c;i++)
		{
			scanf("%d",&arr[j][i]);
			sum=sum+arr[j][i];
			
		}
		
		
		
	}
	printf("%d",sum);
}