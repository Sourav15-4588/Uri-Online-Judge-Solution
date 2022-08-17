#include<stdio.h>
int main()
{
    int t,hundred,fifty,fifty2,twenty,twenty2,ten,ten2,five,five2,two,two2,one;

    scanf("%d",&t);

     printf("%d\n",t);

    hundred=t/100;

     printf("%d nota(s) de R$ 100,00\n",hundred);

    fifty=(t%100);
    fifty2=fifty/50;

     printf("%d nota(s) de R$ 50,00\n",fifty2);

    twenty=(fifty%50);
    twenty2=twenty/20;

     printf("%d nota(s) de R$ 20,00\n",twenty2);

    ten=(twenty%20);
    ten2=ten/10;

     printf("%d nota(s) de R$ 10,00\n",ten2);

    five=(ten%10);
    five2=five/5;

     printf("%d nota(s) de R$ 5,00\n",five2);

    two=(five%5);
    two2=two/2;

     printf("%d nota(s) de R$ 2,00\n",two2);

    one=(two%2);

     printf("%d nota(s) de R$ 1,00\n",one);

    return 0;
}
