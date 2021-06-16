#include<stdio.h>
int main()
{
    printf("\n\n\t\t  SIMPSON 1/3 RULE");
    printf("\n\n ENTER NUMBER OF OBSERVATION : ");
    int n;
    scanf("%d",&n);
    printf("\n fill x and y respectively \n\n");
    float a[n][2];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    float h=(a[n][0]-a[0][0])/n;
    float y=a[0][1]+a[n][1];
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            y+=2*a[i][1];
        }
        else
        {
            y+=4*a[i][1];
        }
    }
    y=(y*h)/3;
    printf("\n\n SOLUTION IS : %0.3f",y);
    return 0;
}
