#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n, &m);

    for (i=1; i<=m; i++)
    {
       printf("%d",i);
       if (i%n!=0)
       printf(" ");

       else if (i%n==0)
        printf("\n");
    }

    return 0;
}
