#include<stdio.h>
float fact(int a)
{
    float f=1;
    for(int i=a;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    printf("\n ENTER NUMBER OF OBSERVATIONS : ");
    scanf("%d",&n);
    float a[n][2];
    printf("\n ENTER VALUE OF X AND Y RESPECTIVELY \n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    float h=a[1][0]-a[0][0];           // step size
    for(int k=0;k<n-1;k++){
    for(int i=0,j=1;i<n-k-1;i++)
    {
        a[i][j]=a[i+1][j]-a[i][j];
    }
    }
    printf("\n");
    printf("\n enter the value of x at which you want to find value of y : ");
    float u,x;
    scanf("%f",&x);
    u=(x-a[n-1][0])/h;
    float u2=u;
    float y=a[n-1][1];
    for(int i=1,j=n-2;i<n;i++,j--)
    {
        y+=(a[j][1]*u)/fact(i);
        u=u*(u2+i);
    }
    printf("\n\nvalue of y at x= %0.2f is : %f",x,y);
    printf("\n\n");
    return 0;
}
