#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,R1,R2,det;
    scanf("%lf %lf %lf",&a, &b, &c);
    det=(b*b)-(4*a*c);
    R1=((-b) + (sqrt(det)))/(2*a);
    R2=((-b) - (sqrt(det)))/(2*a);
    if (a==0 || det<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    }
    return 0;

}
