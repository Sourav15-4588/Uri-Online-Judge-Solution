#include<stdio.h>
int main()
{
    int a,b;
    while (1)
    {
        scanf("%d %d",&a,&b);
        if (a<=0 || b<=0) break;

        int sum=0;

        if (a>b)
        {
          for (int i=b; i<=a; i++)
           {
             printf("%d ",i);

             sum=sum+i;
           }

          printf("Sum=%d\n",sum);
       }

       else if (a<b)
       {
          for (int i=a; i<=b; i++)
        {
            printf("%d ",i);

            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
       }
    }

    return 0;
}
