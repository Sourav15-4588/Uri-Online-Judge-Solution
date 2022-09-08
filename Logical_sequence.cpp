#include<stdio.h>
int main()
{
	int n, i, j,k;
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		j=i*i;
		k=i*j;
		printf("%d %d %d\n",i,j++,k++);
		printf("%d %d %d\n",i,j,k);
	}
	
	return 0;
}
