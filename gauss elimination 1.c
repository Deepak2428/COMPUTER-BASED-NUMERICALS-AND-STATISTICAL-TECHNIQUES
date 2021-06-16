#include<Stdio.h>
int main()
{
    printf("\n\t\t\tGAUSS ELIMINATION METHOD ");
    printf("\n\n ENTER NUMBER OF EQUATIONS : ");
    int n,k;
    scanf("%d",&n);
    float a[n][n+1];
    printf("\n\n  ENTER ALL THE COEFFICIENTS : ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    int i,j;
    for(i=0;i<n;i++)
    {
        for( j=i+1;j<n;j++)
        {
            float offset=a[j][i]/a[i][i];
            for(int k=0;k<n+1;k++)
            {
                a[j][k]-=offset*a[i][k];
            }
        }
    }
    float x[n];
    x[n-1]=a[n-1][n]/a[n-1][n-1];
    for(int i=n-2;i>=0;i--)
    {
        float s=0;
        for(int j=i+1;j<n;j++)
        {
            s=s+a[i][j]*x[j];
        }
        x[i]=(a[i][n]-s)/a[i][i];
    }
     printf("\n\n SOLUTIONS ARE : ");
     for(int i=0;i<n;i++)
     {
         printf("%0.0f ",x[i]);
     }
    return 0;
}
