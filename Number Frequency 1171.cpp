#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	int x[2005];
	for (int i=1; i<=2000; i++)
	{
		 x[i]=0;
	}
	
	int n,N[2005];
	for (int j=1; j<=t; j++)
	{
	
		scanf("%d",&n);
		N[n]=n;
		x[n]++;
	}
	for (int k=1; k<=2000; k++)
	{
		if (x[k]>0)
		{
			printf("%d aparece %d vez(es)\n",N[k],x[k]);
		}
	}
	return 0;
}