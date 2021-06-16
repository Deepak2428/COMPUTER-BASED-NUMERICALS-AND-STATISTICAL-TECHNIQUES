#include<stdio.h>
#include<math.h>
#define e 0.01
float func(float a)
{
    return ((a*a*a)-a-1);
}
int main()
{
    printf("\n\n\t\t\t BISECTION METHOD");
    printf("\n\n GIVEN FUNCTION : X*X*X-X-1");
    printf("\n\n\t\t\t-----------------------------------");
    printf("\n\t\t\t   ITERATIONS                ROOTS");
    printf("\n\n\t\t\t-------------------------------------");
    float a=0;
    float b=1;
    do
    {
        float x=func(a);
        float y=func(b);
        if((x*y)<0)
        {
            break;
        }
        a++;
        b++;
    }
    while(1);
    float x=0.0f,x2=0.0f;
    int i=1;
    do
    {
        x2=x;
        x=(a+b)/2;
        if(func(a)*func(x)>0)
        {
            a=x;
        }
        else if(func(a)*func(x)<0)
        {
            b=x;
        }
        printf("\n\t\t\t ITERATION %d:              %0.2f",i,x);
        i++;
    }
    while(fabs(x2-x)>e);
    printf("\n\t\t\t-------------------------------------");
    printf("\n\t\t\t   ROOT IS : %0.2f",x);
    printf("\n\t\t\t   ITERATIONS : %d",i-1);
    printf("\n\t\t\t-------------------------------------");
    return 0;
}
