#include<stdio.h>
int main()
{
    int n, x, sum=0,c=0,r=0,s=0;
    char ch;
    float cp,rp,sp;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d %c",&x, &ch);
        sum=sum+x;
        if (ch=='C')
        {
            c=c+x;
        }
        else if (ch=='R')
        {
            r=r+x;
        }
        else
        {
            s=s+x;
        }

    }
    cp=(c*100.0)/sum;
    rp=(r*100.0)/sum;
    sp=(s*100.0)/sum;

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",cp);
    printf("Percentual de ratos: %.2f %%\n",rp);
    printf("Percentual de sapos: %.2f %%\n",sp);

    return 0;
}
