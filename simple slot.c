#include<stdio.h>
int main()
{
    int n1 ,n2, n3,temp1, temp2, temp3;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1<n2 && n1<n3)
    {
        temp1=n1;
    }
    else if (n2<n1 && n2<n3)
    {
        temp1=n2;
    }
    else if (n3<n1 && n3<n2)
    {
        temp1=n3;
    }
    printf("%d\n",temp1);

     if ((n1>n2 && n1<n3) || (n1<n2 && n1>n3))
    {
        temp2=n1;
    }
    else if ((n2>n1 && n2<n3) || (n2<n1 && n2>n3))
    {
        temp2=n2;
    }
    else if ((n3>n1 && n3<n2) || (n3<n1 && n3>n2))
    {
        temp2=n3;
    }
    printf("%d\n",temp2);

     if (n1>n2 && n1>n3)
    {
        temp3=n1;
    }
    else if (n2>n1 && n2>n3)
    {
        temp3=n2;
    }
    else if (n3>n1 && n3>n2)
    {
        temp3=n3;
    }
    printf("%d\n",temp3);

    printf("\n%d\n%d\n%d\n",n1,n2,n3);

    return 0;
}
