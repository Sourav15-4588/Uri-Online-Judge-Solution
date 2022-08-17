     // code for problem BEE 1132 uri online judge.
        //solved with nested if and loop.

#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d%d",&x,&y);

   if (x<y)
     {
       int i=x;
       while (i<=y)
         {
           if (i%13!=0)
             {
               sum=sum+i;
             }

          i++;
         }

    }

   else if (x>y)
     {
      int i=y;
      while (i<=x)
        {
           if (i%13!=0)
            {
             sum=sum+i;
            }

         i++;
        }


     }


   printf("%d\n",sum);

    return 0;
}
