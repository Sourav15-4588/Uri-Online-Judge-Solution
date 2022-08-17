#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n, flag=0;
		scanf("%d",&n);

		if (n==0 || n==1)
		{
			flag=1;
		}
		else
		{
			for(int i=2; i<=n/2; i++)
			{
				if (n%i==0)
				{
					flag=1;
					break;
				}
			}
		}

		if (flag==0)
		printf("%d eh primo\n",n);
		else printf("%d nao eh primo\n",n);
	}
	return 0;
}
