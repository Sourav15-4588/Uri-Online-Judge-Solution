#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while (n--)
	{
		int n1,n2,f1,f2,rem;
		scanf("%d %d",&f1,&f2);
		n1=f1;
		n2=f2;
 	  while (n2!=0) {
		rem=n1%n2;
		n1=n2;
		n2=rem;
	  }
	  int gcd=n1;

	  printf("%d\n",gcd);
	}
	return 0;
}
