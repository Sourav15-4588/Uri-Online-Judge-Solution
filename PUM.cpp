#include<stdio.h>
int main()
{
	int x,k=1;
	scanf("%d",&x);
	for (int i=1; i<=x; i++)
	{
		for (int j=1; j<=4; j++)
		{
			if (j==4) {
			printf("PUM\n");
			k++;
			}
			else printf("%d ",k++);
		}
	}

	return 0;
}