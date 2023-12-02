#include <stdio.h>
#include <conio.h>

void main()
{
    float x[100], y[100], xp, sum = 0, p;
    int i, j, n;
   
    printf("Enter number of data: ");
    scanf("%d", &n);
    printf("Enter data of X:\n");
    for (i = 1; i <= n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
       
    }
    printf("Enter data of y:\n");
    for (i = 1; i <= n; i++)
    {
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }
    printf("Enter interpolation point: ");
    scanf("%f", &xp);
    /* Implementing Lagrange Interpolation */
    for (i = 1; i <= n; i++)
    {
        p = 1;
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        sum = sum + p * y[i];
    }
    printf("Interpolated value at %.3f is %.3f.", xp, sum);
  
}