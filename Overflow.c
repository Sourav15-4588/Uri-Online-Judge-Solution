    // a code for problem name overflow
          // problem number BEE 2342 uri online judge.
                 // solved with nested if else.

#include<stdio.h>
int main()

{
    int l, n1, n2, fol;
    char sign;

   scanf("%d %d %c %d",&l, &n1, &sign, &n2);

    if (sign == '+')
    {
        fol=n1+n2;

        if (l>=fol)
         printf("OK\n");

         else printf("OVERFLOW\n");
    }

    else if (sign == '*')
    {
        fol=n1*n2;

        if (l>=fol)
            printf("OK\n");

        else printf("OVERFLOW\n");
    }

    return 0;
}
