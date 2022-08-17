#include<stdio.h>
int main()
{
     int dd,mm,yy;
    scanf("%d/%d/%d",&dd,&mm,&yy);
    printf("%.2d/%.2d/%.2d\n",mm,dd,yy);
    printf("%.2d/%.2d/%.2d\n",yy,mm,dd);
    printf("%.2d-%.2d-%.2d\n",dd,mm,yy);
    return 0;
}
