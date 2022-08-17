#include<stdio.h>
int main()
{
    double salary, ns;
    scanf("%lf",&salary);

    if (salary>=0.00 && salary<=400.0)
     {
       ns=(salary*15.0)/100.0;
        printf("Novo salario: %.2lf\n",salary+ns);
         printf("Reajuste ganho: %.2lf\n",ns);
         printf("Em percentual: 15 %%\n");
     }

    else if (salary>=400.01 && salary<=800.00)
       {
         ns=(salary*12.0)/100.0;
         printf("Novo salario: %.2lf\n",salary+ns);
         printf("Reajuste ganho: %.2lf\n",ns);
         printf("Em percentual: 12 %%\n");
       }

    else if (salary>=800.01 && salary<=1200.00)
       {
         ns=(salary*10.0)/100.0;
         printf("Novo salario: %.2lf\n",salary+ns);
         printf("Reajuste ganho: %.2lf\n",ns);
         printf("Em percentual: 10 %%\n");
       }


    else if (salary>=1200.01 && salary<=2000.00)
       {
        ns=(salary*7.0)/100.0;
         printf("Novo salario: %.2lf\n",salary+ns);
         printf("Reajuste ganho: %.2lf\n",ns);
         printf("Em percentual: 7 %%\n");
       }

    else if (salary>2000.00)
      {
        ns=(salary*4.0)/100.0;
       printf("Novo salario: %.2lf\n",salary+ns);
       printf("Reajuste ganho: %.2lf\n",ns);
       printf("Em percentual: 4 %%\n");
      }

    return 0;
}
