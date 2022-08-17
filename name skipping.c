#include<stdio.h>

int main()
{
    int i;
    char n[100];
    for (i=1; i<=10; i++)
    {
       scanf("%s",&n);

       if (i==3 || i==7 || i==9)
        printf("%s\n",n);
    }


    return 0;
}
