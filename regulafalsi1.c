#include<stdio.h>
#include<math.h>
#define e 0.0001
float func(float a)
{
    return (a*log10(a)-1.2);
}
int main()
{
    printf("\n\n\t\t\t REGULA FALSI METHOD");
    printf("\n\n GIVEN FUNCTION : X*COS(X/X-2)=0");
    printf("\n\n\t\t\t-----------------------------------");
    printf("\n\t\t\t   ITERATIONS                ROOTS");
    printf("\n\n\t\t\t-------------------------------------");
    float a=0.0f;
    float b=1.0f;
    do
    {
        float x=func(a);
        float y=func(b);
        if(x*y<0.0f)
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
        x=a-((b-a)*func(a))/(func(b)-func(a));
        if(func(x)==0.0f)
        {
            break;
        }
        if(func(a)*func(x)>0)
        {
            a=x;
        }
        else if(func(a)*func(x)<0)
        {
            b=x;
        }
         printf("\n\t\t\t ITERATION %d:              %0.4f",i,x);
        i++;
    }
    while(fabs(x2-x)>e);
    printf("\n\t\t\t-------------------------------------");
    printf("\n\t\t\t   ROOT IS : %0.3f",x);
    printf("\n\t\t\t   ITERATIONS : %d",i-1);
    printf("\n\t\t\t-------------------------------------");
    return 0;
}


