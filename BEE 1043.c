#include<stdio.h>
int main()

{
   float a,b,c,perimeter,area;
   scanf("%f %f %f",&a, &b, &c);
   if (a>(b+c) && b>(a+c) && c>(a+b))
   {
       perimeter=a+b+c;
       printf("Perimetro = %.1f\n",perimeter);
   }
   else {
      area=(c*(a+b))/2;
       printf("Area = %.1f\n",area);
   }

   return 0;

}