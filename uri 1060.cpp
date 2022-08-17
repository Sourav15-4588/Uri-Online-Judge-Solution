#include<stdio.h>
int main()
{
    double num;
    int p=0;
    for (int i=1; i<=6; i++)
    {
        scanf("%lf",&num);
        if (num>0)
            p++;
    }
    printf("%d valores positivos\n",p);

    return 0;
}
