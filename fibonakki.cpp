#include<stdio.h>

int main() {
	int n;
	int f[46];
	scanf("%d",&n);
	
	f[0]=0;
	f[1]=1;
	
	printf("%d %d ",f[0],f[1]);
	
	int i;
	for (i=2; i<n; i++)
	{
	    f[i]=f[i-2]+f[i-1];
	    if (i==(n-1))
	    printf("%d",f[i]);
	    
	    else printf("%d ",f[i]);
	}
	printf("\n");
	
	return 0;
}
