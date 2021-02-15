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
