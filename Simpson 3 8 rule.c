#include<stdio.h>
int main()
{
    printf("\n\n\t\t SIMSPSON 3/8 RULE ");
    printf("\n\n  ENTER NUMBER OF OBSERVATIONS : ");
    int n;
    scanf("%d",&n);
    if(n%3!=0)
    {
        printf("\n\n not a multiple of 3 ");
        return 0;
    }
    float a[n][2];
    if(n%3!=0)
    {
        return 0;
    }
    printf("\nfill x and y repsectively \n\n");
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<2;j++)
            scanf("%f",&a[i][j]);
    }
    float h=(a[n][0]-a[0][0])/n;
    float y=a[0][1]+a[n][1];
    for(int i=1;i<n;i++)
    {
        if(i%3==0)
        {
            y+=2*a[i][1];
        }
        else
        {
            y+=3*a[i][1];
        }
    }
    y=(y*3*h)/8;
    printf("\n\n SOLUTION BY SIMPSON 3/8 RULE IS : %0.3f",y);
    return 0;
}
