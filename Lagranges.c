// Lagranges Interpolation to find the value of y for a given value x

// f(x)= (x-x1)(x-x2)(x-x3)---(x-xn)                        (x-x0)(x-x2)(x-x3)---(x-xn)                              (x-x0)(x-x1)(x-x2)---(x-x (n-1))
  //     ----------------------------      X  f(x0)  +      ----------------------------      X  f(x0)   + ------+  ---------------------------------
  //     (x0-x1)(x0-x2)(x0-x3)---(x0-xn)                    (x0-x1)(x0-x2)(x0-x3)---(x0-xn)                           (xn-x0)(xn-x1)(xn-x2)---(xn-x (n-1))


#include<stdio.h>
int main()
{
    printf("\n\t\t LAGRANGES INTERPOLATION");
    printf("\n \n ENTER NO OF OBSERVATIONS : ");
    int n;
    scanf("%d",&n);
    float a[n][2];
    printf("\n ENTER X AND Y VALUES \n");          // enter your value of x and corresponding y value
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("\n\n ENTER VALUE OF X : ");       // value of x at which you wish find value of y
    float x;
    scanf("%f",&x);
    float y=0;
    for(int i=0;i<n;i++)
    {
        float temp=1;
        float temp2=1;
        float x2=a[i][0];
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                temp*=(x-a[j][0]);        //calculating numerator
                temp2*=(x2-a[j][0]);      //calculating denominator
            }
        }
        y+=(temp*a[i][1])/temp2;           
    }
    printf("\n\n VALUE OF Y AT X= %0.3f  IS : %0.3f",x,y);
    printf("\n\n\n\n");
    return 0;
}
