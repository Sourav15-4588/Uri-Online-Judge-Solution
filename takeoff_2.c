#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if (N>=0&&N<=15)
    {
        printf("FUchka");
    }
    else if (N>=16&&N<=35)
    {
        printf("chotpoti");
    }
    else if (N>=36&&N<=100)
    {
        printf("jalmuri");
    }
    return 0;
}
