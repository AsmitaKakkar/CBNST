//how to use built-in function of tan()

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
