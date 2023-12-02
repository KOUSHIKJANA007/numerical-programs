#include<stdio.h>
float df(float x,float y);

void main(){
    float x,y,xn,h,k1,k2,k3,k4,k;
    int i,n;
    printf("Enter initial value\n");
    printf("x= ");
    scanf("%f",&x);
    printf("y= ");
    scanf("%f",&y);
    printf("Enter x at which y is required xn= ");
    scanf("%f",&xn);
    printf("Enter step size: \n");
    scanf("%f",&h);
    n=(xn-x)/h+0.5;
    printf("\nStep\tx\ty\n");
    printf("____________________\n");
    for ( i = 1; i <= n; i++)
    {
        k1=h*df(x,y);
        k2=h*df(x+h/2.0,y+k1/2.0);
        k3=h*df(x+h/2.0,y+k2/2.0);
        k4=h*df(x+h,y+k3);
        k=(k1+2.0*(k2+k3)+k4)/6.0;
        x=x+h;
        y=y+k;
        printf("%d\t%.4lf\t%.4lf\n", i, x, y);
    }
    printf("y at x= %.3lf is %.4lf\n", x, y);
}
float df(float x,float y){
    return (x*y*y-y/x);
}