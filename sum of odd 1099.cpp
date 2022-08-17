#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int x,y,sum=0;
        scanf("%d %d",&x, &y);
       if (x<y && y-x>1) {
        for (int i=x+1; i<y; i++)
        {
            if (i%2==0) continue;
            sum=sum+i;
        }
       }
       else if (x>y && x-y>1) {
        for (int i=y+1; i<x; i++)
        {
            if (i%2==0) continue;
            sum=sum+i;
        }
       }
       else sum=0;

       printf("%d\n",sum);

    }

    return 0;
}
