// Runge kutta method to find value of y for a particuar value of x in an ordinary differential equation

#include<stdio.h>
float func(float a,float b)
{
    return(a*a-b);                           // define your own equation eg: dy/dx= x*x-y
}
int main()
{
    printf("\n\n\t\t RUNGE KUTTA METHOD ");
    float x0,y0,h,xn;
    printf("\n\n ENTER VALUE OF X0 AND Y0 : ");              // initial conditions
    scanf("%f%f",&x0,&y0);
    printf("\n\n ENTER THE STEP SIZE : ");                   // step size
    scanf("%f",&h);
    printf("\n\n ENTER VALUE OF X AT WHICH YOY WANT TO FIND VALUE OF Y : ");
    scanf("%f",&xn);
    float y=y0;
    float x=x0;
    printf("\n\n\t x\t\t y");
    while(x<xn)
    {
        float k1=h*func(x,y);
        float k2=h*func(x+(0.5*h),y+(0.5*k1));
        float k3=h*func(x+(0.5*h),y+(0.5*k2));
        float k4=h*func(x+h,y+k3);
        float k=((k1+(2.0*k2)+(2.0*k3)+k4)*0.1)/6.0;
        y=y+k;
        x=x+h;
        printf("\n\t%0.1f\t\t%0.3f",x,y);
    }
    return 0;
}
