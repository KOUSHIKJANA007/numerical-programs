#include <stdio.h>
#include <conio.h>
#include <math.h>

#define F(x) (x*x*x - x - 11)

void main()
{
    int n,i=1;
    float a,b,c,f;
    printf("Enter value of a and b:\n");
    scanf("%f%f",&a,&b);
    printf("Enter number of iteration:\n");
    scanf("%d",&n);
    do
    {
        c=(a+b)/2;
        f=F(c);
        printf("\n i=%d a=%f b=%f F(c)=%f",i,a,b,f);

        if(F(a) * F(c)<0){
            b=c;
        }
        else
        {
            a=c;
        }
        i++;

    } while (i<=n);
    printf("\n\n\n Aproximate root: %.3f",c);
    
}