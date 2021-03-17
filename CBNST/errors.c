//*********To find the absolute error relative error and percentage error

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	float tv,av;
	float E,Ea,Er,Ep;
	printf("Enter true value:");
	scanf("%f",&tv);
	printf("Enter approx value");
	scanf("%f",&av);
	E=tv-av;
	Ea=fabs(tv-av);
	Er=Ea/tv;
	Ep=Er*100;
	printf("Error=%f\n Absolute Error=%f\n Relative Error=%f\n Percentage Error=%f\n",E,Ea,Er,Ep);
	
	return 0;
}
