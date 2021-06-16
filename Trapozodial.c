#include<stdio.h>
int main()
{
    int n;
    printf("\n\t\t TRAPOZODIAL RULE");
    printf("\n\n ENTER NUMBER OF OBSERVATIONS : ");
    scanf("%d",&n);
    float a[n][2];
    printf("\n FILL X AND Y RESPECTIVELY \n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    float y=0;
    float y2=(a[1][0]-a[0][0]);
    y=(a[0][1]+a[n-1][1])/2;
    for(int i=1;i<n-1;i++)
    {
        y+=a[i][1];
    }
    y*=y2;
    printf("\n\n VALUE OF Y AT  IS : %0.3f \n\n",y);
    return 0;
}
