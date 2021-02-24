#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	int n,i,j,arr[5][5];
	printf("Enter the number of linear equations:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the coefficients of (x,y,z and constant value) for equation %d:",i+1);

		for(j=0;j<=n;j++)
		{
			scanf("%d",&arr[i][j]);		
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%d ",arr[i][j]);
		
		}
		printf("\n");
	}
	printf("************UPPER TRIANGULAR***********\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				arr[i][j]-=(arr[i-1][i-1]/arr[i-1][i-1])*arr[i][j];
			}
			if(i==j)
			{
				arr[i][i]/=arr[i][i];
			}
		}
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
