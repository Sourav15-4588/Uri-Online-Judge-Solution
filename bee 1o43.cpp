#include<stdio.h>
int main()

{
   float a,b,c,perimeter,area;
   scanf("%f %f %f",&a, &b, &c);
   perimeter=a+b+c;
   area=((a+b)/2.0)*c;

   if (a<b+c && b<a+c && c<a+b)
   {

       printf("Perimetro = %.1f\n",perimeter);
   }
   else
    {

       printf("Area = %.1f\n",area);
   }

   return 0;

}
