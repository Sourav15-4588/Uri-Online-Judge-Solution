#include<stdio.h>
int main()
{
   int t,n,c=1,tk, total;
   char sign;
   scanf("%d",&t);
   while (t--)
   {
       int add=0;
       scanf("%d",&n);

       while (n--)
         {
           scanf(" %c %d",&sign, &tk);

           if (sign=='+')
           add=add+tk;

           else
            add=add-tk;
         }

       total=1000+add;

       printf("Case %d: %d\n",c++,total);

   }

return 0;

}
