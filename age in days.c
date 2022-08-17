#include<stdio.h>
int main()
{
    int y,year,m,month,day;
    scanf("%d",&y);
    year=y/365;
    printf("%d ano(s)\n",year);
    m=y%365;
    month=m/30;
    printf("%d mes(es)\n",month);
    day=m%30;
    printf("%d dia(s)\n",day);
    return 0;
}
