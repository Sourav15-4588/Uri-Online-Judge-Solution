#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int pa, pb;
		double ga,gb;
		scanf("%d %d %lf %lf",&pa, &pb, &ga, &gb);
		int ra, rb, suma=pa, sumb=pb, c=0;
		while(1)
		{
			ra=(suma*ga)/100;
			rb=(sumb*gb)/100;
			suma=suma+ra;
			sumb=sumb+rb;
			c++;
			if(suma>sumb) break;
			
		}
		if(c>100)
		printf("Mais de 1 seculo.\n");
		else
		printf("%d anos.\n",c);
	}
	
	return 0;
}