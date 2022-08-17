
#include<stdio.h>
int main()
{
	int n, ev[5], od[5], e=0, o=0;

	for(int i=0; i<15; i++)
    {
        scanf("%d",&n);

        if (n%2==0)
        {
            ev[e]=n;
            e++;

            if (e==5)
            {
                for (int j=0; j<5; j++)
                {
                    printf("par[%d] = %d\n",j,ev[j]);
                    ev[j]=0;
                }
                e=0;
            }
        }

        else
        {
            od[o]=n;
            o++;

            if (o==5)
            {
                for (int j=0; j<5; j++)
                {
                    printf("impar[%d] = %d\n",j,od[j]);
                    od[j]=0;
                }
                o=0;
            }
        }

    }
    for (int m=0; m<5; m++)
    {
        if (od[m]==0) break;
        printf("impar[%d] = %d\n",m,od[m]);
    }
    for (int m=0; m<5; m++)
    {
        if(ev[m]==0) break;
        printf("par[%d] = %d\n",m,ev[m]);
    }

	return 0;
}
