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
