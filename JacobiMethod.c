#include <stdio.h>
#include <math.h>
#define e 0.01

#define F1(x, y, z) (85-6*y+z) / 27
#define F2(x, y, z) (72-6*x-2*z) / 15
#define F3(x, y, z) (110 -x-y) / 54
void main(){
    float x0, y0, z0, x1, y1, z1, ex, ey, ez;
    int count = 0;
    printf("Enter initial guess for x:\n");
    scanf("%f", &x0);

    printf("Enter initial guess for y:\n");
    scanf("%f", &y0);

    printf("Enter initial guess for z:\n");
    scanf("%f", &z0);
    printf("\n Count\tx\ty\tz\n");
    do
    {
        x1 = F1(x0, y0, z0);
        y1 = F2(x0, y0, z0);
        z1 = F3(x0, y0, z0);

        printf("%d\t%0.4f\t%0.4f\t%0.4f\n", count, x1, y1, z1);

        ex = fabs(x1 - x0);
        ey = fabs(y1 - y0);
        ez = fabs(z1 - z0);
        count++;

        x0 = x1;
        y0 = y1;
        z0 = z1;
    } while (ex > e && ey > e && ez > e);
    printf("\n Final Approximation:\n x=%0.3f\ny=%0.3f\nz=%0.3f\n", x1, y1, z1);
}