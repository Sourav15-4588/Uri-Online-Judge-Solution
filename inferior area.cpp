#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	double n[12][12],sum=0.0;

    for (int i=0; i<=11; i++) {
		for(int j=0; j<=11; j++) {
			
		     scanf("%lf",&n[i][j]);
		     
		     if (j>(11-i) && j<i)
		     {
		     	sum=sum+n[i][j];
		     }
		}
    }

	   if (ch=='S')
	   	printf("%.1lf\n",sum);

	   else if (ch=='M')
        printf("%.1lf\n",sum/30.0);

	return 0;
}