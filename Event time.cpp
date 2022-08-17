#include<stdio.h>
int main()
{
	int ds, hs, ms, ss, de, he, me, se;

	scanf("Dia %d",&ds);
	scanf("%d : %d : %d\n",&hs, &ms, &ss);
	scanf("Dia %d",&de);
	scanf("%d : %d : %d",&he, &me, &se);

	int time=de-(ds+1);
	int st=86400-((hs*3600)+(ms*60)+ss);
	int et=(he*3600)+(me*60)+se;
	int duration=st + (86400*time) + et;

	int day=duration/86400;
	int ho=(duration%86400);
	int hour=ho/3600;
	int mi=ho%3600;
	int min=mi/60;
	int sec=mi%60;

	printf("%d dia(s)\n",day);
	printf("%d hora(s)\n",hour);
	printf("%d minuto(s)\n",min);
	printf("%d segundo(s)\n",sec);

	return 0;
}