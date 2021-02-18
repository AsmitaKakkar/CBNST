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
