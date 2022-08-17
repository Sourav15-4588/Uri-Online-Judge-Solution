#include<stdio.h>
int main()
{
int time,speed;
float fuelNeed;
scanf("%d%d",&time,&speed);
fuelNeed=(time*speed)/12;
printf("%.3f\n",fuelNeed);
return 0;
}
