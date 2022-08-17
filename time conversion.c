#include<stdio.h>
int main()
{
    int time,hour,min,minute,sec;
    scanf("%d",&time);
    hour=time/3600;
    min=time%3600;
    minute=min/60;
    sec=min%60;
    printf("%d:%d:%d\n",hour,minute,sec);
    return 0;
}
