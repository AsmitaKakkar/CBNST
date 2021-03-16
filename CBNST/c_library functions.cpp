//C library functions 

//cosine function

#include<stdio.h>
#include<math.h>
int main()
{
	float ans;
	float result;
	printf("Enter ans:");
	scanf("%f",&ans);
	ans=(ans*3.14)/180;
	result=cos(ans);
	printf("cos of %f radian is %f",ans,result);
	return 0;
}

//sine function

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14158
int main()
{
	float arg,result;
	printf("Enter the value of arg in degrees:");
	scanf("%f",&arg);
	arg=(arg*PI)/180;
	result=sin(arg);
	printf("sin(%f)=%f",arg,result);
	
	
	return 0;
}



//tan function


#include<stdio.h>
#include<math.h>
#include<conio.h>
#define PI 3.14158
int main()
{
	float arg,result;
	printf("Enter the value of arg in degrees:");
	scanf("%f",&arg);
	arg=(arg*PI)/180;
	result=tan(arg);
	printf("tan(%f)=%f",arg,result);
	
	return 0;
}



//how to find cotx using built-in function of sin()and cos()

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14158

float sine(float arg)
{
	float result1;
	result1=sin(arg);
	return result1;
}

float cosine(float arg)
{
	float result2;
	result2=cos(arg);
	return result2;
}

int main()
{
	float arg,result,result1,result2;
	printf("Enter the value of arg in degrees:");
	scanf("%f",&arg);
	arg=(arg*PI)/180;
	result1=sine(arg);
	result2=cosine(arg);
	printf("sin(%f)=%f\n",arg,result1);
	printf("cos(%f)=%f\n",arg,result2);
	result=result2/result1;
	printf("cot(%f)=%f\n",arg,result);
	return 0;
}


//how to use built-in base 10 lograthmic function

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float value,result;
	printf("Enter the value:");
	scanf("%f",&value);
	result=log10(value);
	printf("The base 10 lograthim of %f is %f",value,result);
	return 0;
}
