#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int space=n/2;
		int line=n/2;

		for (int i=1; i<=n; i+=2)
       {
          for (int j=1; j<=space; j++)
               printf(" ");
              space--;

          for (int k=1; k<=i; k++)
               printf("*");
               printf("\n");

       }
       for (int i=1; i<=3; i+=2)
       {
          for (int j=1; j<=line; j++)
               printf(" ");
              line--;

          for (int k=1; k<=i; k++)
               printf("*");
                printf("\n");
       }
       printf("\n");
	}

	return 0;
}
