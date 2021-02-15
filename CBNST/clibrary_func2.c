//how to use built-in function of sin()

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
