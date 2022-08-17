#include<stdio.h>
int main()

{
    double t;
    int temp, hundred,fifty,fifty2,twenty,twenty2,ten,ten2,five,five2,two,two2,one2,one,fiftyp, fiftyp2, tfivep, tfivep2, tenp, tenp2,fivep, fivep2, ekp,ekp2;
    scanf("%lf",&t);

    temp = t*100;

     printf("NOTAS:\n");

    hundred=temp/10000;
     printf("%d nota(s) de R$ 100.00\n",hundred);

    fifty=(temp%10000);
    fifty2=fifty/5000;
     printf("%d nota(s) de R$ 50.00\n",fifty2);

    twenty=(fifty%5000);
    twenty2=twenty/2000;
     printf("%d nota(s) de R$ 20.00\n",twenty2);

    ten=(twenty%2000);
    ten2=ten/1000;
     printf("%d nota(s) de R$ 10.00\n",ten2);

    five=(ten%1000);
    five2=five/500;
     printf("%d nota(s) de R$ 5.00\n",five2);

    two=(five%500);
    two2=two/200;
     printf("%d nota(s) de R$ 2.00\n",two2);

       printf("MOEDAS:\n");

     one=(two%200);
    one2=one/100;
     printf("%d moeda(s) de R$ 1.00\n",one2);

     fiftyp=(one%100);
     fiftyp2=fiftyp/50;
      printf("%d moeda(s) de R$ 0.50\n",fiftyp2);

    tfivep=(fiftyp%50);
    tfivep2=tfivep/25;
      printf("%d moeda(s) de R$ 0.25\n",tfivep2);

    tenp=(tfivep%25);
    tenp2=tenp/10;
      printf("%d moeda(s) de R$ 0.10\n",tenp2);

      fivep=(tenp%10);
      fivep2=fivep/5;
       printf("%d moeda(s) de R$ 0.05\n",fivep2);

       ekp=(fivep%5);
       ekp2=ekp/1;
        printf("%d moeda(s) de R$ 0.01\n",ekp2);



    return 0;
}
