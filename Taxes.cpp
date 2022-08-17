#include<stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if (x>=0.00 && x<=2000.00)
	{
		printf("Isento\n");
	}
	else if (x>=2000.01 && x<=3000.00)
	{
		double n1=x-2000.00;
		double vat=(8.00*n1)/100.00;
		printf("R$ %.2lf\n",vat);
	}
	else if (x>=3000.01 && x<=4500.00)
	{
		double n1=(x-3000);
		double vat=((18.00*n1)/100.00) + 80.00;
		printf("R$ %.2lf\n",vat);
	}
	else 
	{
		double n1=x-4500.00;
		double vat=((28.00*n1)/100.0)+80+270;
		printf("R$ %.2lf\n",vat);
	}
	return 0;
}