//trignometric equation


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

float f(float x)
{
    return x-cos(x);
}

float bisection(float a,float b)
{
	float c,tol,temp;
	int i,itr;
	printf("Enter the Tolerance and Iterations of the roots.\n");
	scanf("%f%d",&tol,&itr);
	for(i=1;i<=itr;i++)
	{
	c=(a+b)/2;
	temp=c;
	printf("Value of c after %d iteration is %f\n",i,c);

	if(f(a)*f(c)<0)
	{
		b=c;
	}
	else if((f(a)*f(b)==0))
	{
		printf("%d is the root of the equation!!\n",c);
		break;
	}
	else
	{
		a=c;
	}
	c=(a+b)/2;
	if(fabs(temp-c)<tol)
	{
		printf("Value of c after %d iteration is %f\n",i+1,c);
		printf("root is %f found at %d iteration\n",c,i+1);
		return;
	}
	
	}
}


int main()
{
	char choice;
    float a,b;
    
    do
	{
		printf("Guess two intervals you think the roots lie between!!\n");
    	scanf("%f%f",&a,&b);
		
		if(f(a)*f(b)<0)
    	{
        printf("Correct interval!!\nRoots lie between this interval!!\n");
        bisection(a,b);
    	}
    	else if(f(a)*f(b)==0)
    	{
    	if((f(a)==0))
    	{
    		printf("%f is the root of the equation.\n",a);
		}
		else
		{
			printf("%f is the root of the equation.\n",b);
		}
		}
		else
		{
			printf("try again!!");
		}	
		printf("Do you want to try again?\n");
		scanf("%s",&choice);
	}
	while(choice=='y'|| choice=='Y');
    
    return 0;
}
