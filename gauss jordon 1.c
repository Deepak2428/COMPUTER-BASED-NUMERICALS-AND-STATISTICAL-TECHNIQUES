#include<stdio.h>
int main()
{
    int n;
    printf("\n\t\t\t  GAUSS JORDAN METHOD ");
    printf("\n ENTER NUMBER OF EQUATIONS : ");
    scanf("%d",&n);
    float a[n][n+1];
    printf("\n ENTER ALL THE COEFICIENTS :  ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                float c=a[j][i]/a[i][i];
                for(int k=0; k<(n+1); k++)
                {
                    a[j][k]=a[j][k]-(c*a[i][k]);
                }
            }
        }
    }
    float x[n];
    printf("\nThe solution is:\n");
    for(int i=0; i<n; i++)
    {
        x[i]=a[i][n]/a[i][i];
        printf("\n x%d=%f\n",i,x[i]);
    }
    return(0);
}

