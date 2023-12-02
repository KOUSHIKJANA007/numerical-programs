#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e 0.001

#define F1(x, y, z) (7 + y) / 2
#define F2(x, y, z) (1 + x + z) / 2
#define F3(x, y, z) (1 + y) / 2
void main()
{
    int i=0;
    float x0,y0,z0,x1,y1,z1,ex,ey,ez;
    printf("Enter  x :\n");
    scanf("%f", &x0);
    printf("Enter  y :\n");
    scanf("%f", &y0);
    printf("Enter  z :\n");
    scanf("%f", &z0);
    printf("\n Count\tx\ty\tz\n");
    do
    {
       x1=F1(x0,y0,z0);
       y1=F2(x1,y0,z0);
       z1=F3(x1,y1,z0);
       printf("%d\t%0.4f\t%0.4f\t%0.4f\n", i, x1, y1, z1);

       ex=fabs(x1-x0);
       ey=fabs(y1-y0);
       ez=fabs(z1-z0);
       i++;
       x0=x1;
       y0=y1;
       z0=z1;
    } while (ex>e && ey>e && ez>e);
    printf("\n Final Approximation:\n x=%0.3f\ny=%0.3f\nz=%0.3f\n", x1, y1, z1);
}