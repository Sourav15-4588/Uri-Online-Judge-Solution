
#include<stdio.h>
int main()
{
	int a, n;
	scanf("%d",&a);
     while (1)
     {
         scanf("%d",&n);
         if (n>0) break;
     }
     int sum=0;
   for (int i=1; i<=n; i++)
   {
       sum=sum+a;
       a++;
   }
   printf("%d\n",sum);
	return 0;
}
