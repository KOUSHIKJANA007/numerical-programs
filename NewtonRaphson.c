#include<stdio.h>
#include<math.h>
#define e 0.001
#define F(x) pow(x,3)-3*x-5
#define df(x) 3*x*x-3
int main(){
    float x0,x1,f0,f1,df0;
    int i=0;
    printf("Enter the value of x0:\n");
    scanf("%f",&x0);
    do
    {
        f0=F(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=F(x1);
        x0=x1;
        i++;
        printf("No of iteration: %d\t",i);
        printf("Root: %f\t",x1);
        printf("Value of function: %f\n",f1);
    } while (fabs(f1)>e);
    
}