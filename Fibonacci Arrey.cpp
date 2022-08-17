#include<stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while (t--) 
	{
	  int n;
	  scanf("%d",&n);
	  long long int f[n+5];
	  f[0]=0;
	  f[1]=1;

	  for (int i=2; i<n+1; i++)
	  {
	    f[i] = f[i-2] + f[i-1];
      }
	 printf("Fib(%d) = %lld\n",n,f[n]);
   }
	
	return 0;
}
