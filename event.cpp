#include<stdio.h>
int main()
{
    int n,m;
    while(1)
    {
        scanf("%d %d",&n, &m);
        if (n==0 && m==0) break;
        printf("%d\n",n*m);
    }

    return 0;
}
