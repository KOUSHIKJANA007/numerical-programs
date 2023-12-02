#include<stdio.h>
#include<math.h>
#define e 0.001
#define F(x) ((x * log(x)) - 1.2)
void main(){
    int i=0;
    float x0,x1,x2,f0,f1,f2;
    printf("Enter two gauss :\n");
    scanf("%f%f",&x0,&x1);
    do
    {
        f0=F(x0);
        f1=F(x1);
        x2=((x0 * f1)-(x1 * f0))/(f1-f0);
        f2=F(x2);
        if (f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        i++;
        printf("i=%d root=%.4f F(X2)=%.4f \n",i,x2,f2);
        
    } while (fabs(f2)>e);
    
}
