#include<stdio.h>
int main()
{
    int i,n,p,h=0;
    for (i=1; i<=100;i++)
    {
        scanf("%d",&n);
     if (n>h)
     {
        h=n;
        p=i;
     }
    }

    printf("%d\n%d\n",h,p);

    return 0;
}
