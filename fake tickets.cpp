#include<stdio.h>

int main()
{
    int n,m,i,u,t[10001],sum;

    while(1)
    {
    	scanf("%d %d",&n,&m);
    	if (n==0 && m==0) break;
    	
        for(i=1;i<=n;i++)
        {
            t[i]=0;
        }

        for(i=0;i<m;i++)
        {
            scanf("%d",&u);
            t[u]++;
        }
        sum = 0;
        for(i=1;i<=n;i++)
        {
            if(t[i]>1)
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
