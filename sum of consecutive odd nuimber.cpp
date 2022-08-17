#include<stdio.h>
int main()
{
	int n, x, y;
	scanf("%d",&n);
	 while (n--)
	 {
       	int i=0, sum=0;
       	
		scanf("%d %d",&x, &y);
		
		while(1)
		{
			if(i==y) break;
			
			if(x%2==0)
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
