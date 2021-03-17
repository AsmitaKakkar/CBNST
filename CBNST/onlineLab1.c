//QUESTION :1

//**********Upper triangular matrix*********


/*#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i,j,n,arr[10][10];
	printf("Enter the limit of a square matrix:");
	scanf("%d",&n);
	printf("Enter the values in the matrix----->\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Obtained matrix------>\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				arr[i][j]-=(arr[j][j]/arr[j][j])*arr[i][j];
			}
		}
	}
	printf("Upper Triangular Matrix----->\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/




//*********Lower Triangular Matrix********


/*#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i,j,n,arr[10][10];
	printf("Enter the limit of a square matrix:");
	scanf("%d",&n);
	printf("Enter the values in the matrix---->\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);	
		}	
	}	
	printf("Obtained matrix------>\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				arr[i][j]-=arr[j][j]/arr[j][j]*arr[i][j];
			}
		}
	}
	printf("Lower triangular Matrix----->\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/



//QUESTION :2

//To find the degree and coefficient of the 
