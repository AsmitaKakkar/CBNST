//CBNST LAB 2:--

//Evaluating the value of polynomial equation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	int n,i,coff[10],sum=0,x,p;
	printf("Enter the degree of the polynomial equation:");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		printf("Enter the cofficient of x to the power %d ",i);
		scanf("%d",&coff[i]);	
	}
	printf("Obtained Equation:-\n");
	for(i=n;i>0;i--)
	{
		printf("%dx^%d+",coff[i],i);
	
	}
	printf("%d=0\n",coff[0]);
	
	printf("Enter the value of x for which the equation is to be evaluated:");
	scanf("%d",&x);
	
	printf("Solution of the above euation:-\n");
	for(i=n;i>=0;i--)
	{
		p=coff[i];
		sum+=p*pow(x,i);
		
	}
	printf("%d",sum);
	
	return 0;
}
