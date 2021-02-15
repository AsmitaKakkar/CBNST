//Cosine function

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159
int main()
{
   double arg = 30, result;

   // Converting to radian
   arg = (arg * PI) / 180;
   result = cos(arg);

   printf("cos of %.2lf radian = %.2lf", arg, result);

   return 0;
}

