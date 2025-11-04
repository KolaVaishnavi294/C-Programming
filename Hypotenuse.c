#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c=((a*a)+(b*b));
    printf("%.2lf",sqrt(c));
}