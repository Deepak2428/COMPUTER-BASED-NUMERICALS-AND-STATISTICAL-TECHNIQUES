#include<stdio.h>
float fun(float a,float b)
{
    return(a*b);      // (dy/dx) = x + y
}
int main()
{
    float x0,y0,h,xn;
    printf("\n\n\t\t  EULERS METHOD");
    printf("\n\n enter initial conditions x0 and y0 : ");
    scanf("%f%f",&x0,&y0);
    printf("\n enter the step size : ");
    scanf("%f",&h);
    printf("\n enter value of x at which you wish to find value of y : ");
    scanf("%f",&xn);
    float x=x0;
    float y=y0;
    printf("\n\n\t x\t\t y");
    while(x<=xn)
    {
        float k=h*fun(x,y);
        x=x+h;
        y=y+k;
         printf("\n\t%0.3f\t\t%0.3f",x,y);
    }

    return 0;
}
