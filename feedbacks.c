#include<stdio.h>
int main()
{
    int n,k,x;
    scanf("%d",&n);

     while (n>0)
        {
         scanf("%d",&k);

           while (k>0)
              {
                scanf("%d",&x);

                if (x==1) printf("Rolien\n");

                else if (x==2) printf("Naej\n");

                else if (x==3) printf("Elehcim\n");

                else printf("Odranoel\n");

                --k;
              }

            --n;
        }


   return 0;
}
