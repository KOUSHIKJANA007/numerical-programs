#include <stdio.h>
#include <conio.h>

void main(){
    float x,u1,u,y;
    int i,j,n,fact;
    printf("Enter no. of terms\n");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter the value of X:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&a[i][0]);
    }
    printf("Enter the value of Y:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&a[i][1]);
    }
    printf("Enter value of x for which you want y\n");
    scanf("%f",&x);
    for ( j = 2; j < n+1; j++)
    {
       for ( i = 0; i < n-j+1; i++)
       {
        a[i][j]=a[i+1][j-1]-a[i][j-1];
       }
        
    }
    printf("Difference table as follow\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= n-i; j++)
        {
            printf("%f",a[i][j]);
        }
        printf("\n");
    }
    
    u=(x-a[n-1][0])/(a[1][0]-a[0][0]);
    y=a[n-1][1];

    u1=u;
    fact=1;
    j=2;
    for ( i = n-2; i >=0; i--)
    {
        y=y+(u1*a[i][j])/fact;
        fact=fact*j;
        u1=u1*(u+(j-1));
        j++;
    }
    printf("\n\nValue at X=%g is = %f",x,y);
    
}