#include<stdio.h>
int main()
{
	int x;
	while (1)
	{
		scanf("%d",&x);
		if (x==0) break;
		
		int i=1, sum=0;
		
		while (1)
		{
			if (i>5) break;
			
			if (x%2==0)
			{
				sum=sum+x;
				i++;
			}
			x++;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}