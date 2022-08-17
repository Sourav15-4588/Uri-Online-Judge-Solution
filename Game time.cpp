
#include<stdio.h>
int  main()
{
    int t1, tm1, t2, tm2, start, enD, time, duration, minute;
    scanf("%d %d %d %d",&t1, &tm1, &t2, &tm2);
    start=(t1*60)+tm1;
    enD=(t2*60)+tm2;
    if (t1==tm1 && tm1==t2 && t2==tm2 && tm2==t1)
    {
       duration=24;
        minute=0;
    }
    else if (start>enD)
    {
        time=(24*60-start)+enD;
        duration=time/60;
        minute=time%60;
    }
    else
    {
        time=enD-start;
        duration=time/60;
        minute=time%60;
    }
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration, minute);

    return 0;
}


