#include<Stdio.h>
#include<math.h>
#define e 0.000001
double func(double a)
{
    double x=-1*cos(a+0.785)+0.8;
    return x;
}
double derivate(double a)
{
    double x=sin(a+0.785);
    return x;
}
int main()
{
    printf("\n\n\t\t\t NEWTON RAPHSON METHOD");
    printf("\n\n GIVEN FUNCTION : -COS(X+0.785)+0.8");
    printf("\n\n\t\t\t-------------------------------------");
    printf("\n\t\t\t   ITERATIONS                ROOTS");
    printf("\n\t\t\t-------------------------------------");
    double x0,x1=4.5,f1,f0;
    int i=1;
    do
    {
        x0=x1;
        f1=func(x0);
        f0=derivate(x0);
        x1=x0-(f1/f0);
        printf("\n\t\t\t    ITERATION %d:                  %.6lf",i,x1);
        i++;
    }
    while(fabs(x1-x0)>e);
    printf("\n\t\t\t-------------------------------------");
    printf("\n\t\t\t   ROOT IS : %0.6lf",x1);
    printf("\n\t\t\t   ITERATIONS : %d",i-1);
    printf("\n\t\t\t-------------------------------------");
    return 0;
}
