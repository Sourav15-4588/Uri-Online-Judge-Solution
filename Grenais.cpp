#include<stdio.h>
int main()
{
    int t,i,g,sw,in=0,gr=0,em=0,total=0;
    while (1)
    {
        scanf("%d %d",&i, &g);
        printf("Novo grenal (1-sim 2-nao)\n");
        total++;
        if (i==g)
            em++;
        else if (i>g)
            in++;
        else gr++;

        scanf("%d",&t);
        if (t==2) break;

    }
        printf("%d grenais\n",total);
        printf("Inter:%d\n",in);
        printf("Gremio:%d\n",gr);
        printf("Empates:%d\n",em);
        if (in>gr)
            printf("Inter venceu mais\n");
        else if (in<gr)
            printf("Gremio venceu mais\n");
        else printf("Não houve vencedor\n");

    return 0;
}
