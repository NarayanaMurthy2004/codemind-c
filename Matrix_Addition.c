#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		
		}
    }
    
    
	int r1,c1;
	scanf("%d%d",&r1,&c1);
	int brr[r1][c1];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&brr[i][j]);
		}
	}
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",brr[i][j]+arr[i][j]);
		}
		printf("
");
	}
	
}