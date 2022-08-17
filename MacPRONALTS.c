#include<stdio.h>
int main()
{
    int t, code, qunt;
    double bill,sum=0;

    scanf("%d",&t);

      while (t>0)
          {
             scanf("%d %d",&code, &qunt);

             if (code==1001)
                 bill=(qunt*1.50);

             else if (code==1002)
                bill=(qunt*2.50);

             else if (code==1003)
                bill=(qunt*3.50);

             else if (code==1004)
                bill=(qunt*4.50);

             else if (code==1005)
                bill=(qunt*5.50);

             sum=sum+bill;
             t--;
          }
          printf("%.2lf\n",sum);


    return 0;
}
