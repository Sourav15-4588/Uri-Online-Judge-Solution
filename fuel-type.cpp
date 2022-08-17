#include<stdio.h>
int main()
{
    int f, al=0, gas=0, di=0;
    while (1)
    {
        scanf("%d",&f);
        if (f==4) break;

        else if (f==1)
            al++;

        else if (f==2)
            gas++;

        else if (f==3)
            di++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",di);

    return 0;
}
