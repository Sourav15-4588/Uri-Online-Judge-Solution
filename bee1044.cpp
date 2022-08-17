#include<stdio.h>
int main()

{
   int num, num1, m, m2;
   scanf("%d %d",&num, &num1);
   m = num1 % num;
   m2 = num%num1;
   if (m==0 || m2==0)
   {
       printf("Sao Multiplos\n");
   }
   else printf("Nao sao Multiplos\n");


   return 0;

}
