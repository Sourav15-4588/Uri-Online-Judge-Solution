#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	
	double n[12][12];
	
	for (int i=0; i<12; i++)
	{
		for (int j=0; j<12; j++)
		{
			scanf("%lf",&n[i][j]);
		}
	}
	
	double sum=0.0;
	
	for (int i=0; i<12; i++)
	{
		for (int j=i+1; j<12; j++)
		{
			sum=sum+n[i][j];
		}
	}
	
	if (ch=='S')
	printf("%.1lf\n",sum);
	
	else if (ch=='M')
	printf("%.1lf\n",sum/66.0);
	
	return 0;
}