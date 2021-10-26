#include <stdio.h>
#include <math.h>

int main()
{
    float x1 = 0.3;
    while(x1<1)
    {
        float y1 = atan(1/x1);
        printf("arctg(1/x)=%f \n", y1);
        x1 += 0.3;
    }
    printf("\n");
    float x2 = 1;
    while(x2<3)
    {
        float y2 = tan(x2+log(x2)/log(4));
        printf("tg(x+log4(x))=%f \n", y2);
        x2 += 0.3;
    }
    
   printf("\n");
   for(float x3=3;x3<=3.5;x3+=0.3)
   {
       float y3 = 1/(1+log(x3));
       printf("1/(1+ln(x))=%f\n", y3);
   }

    printf("\n");
    float n = 1;
    float x4 = -0.5;
    float y4 = 1;
    while(x4<=0 && y4>0.001 || y4<-0.001)
    {
        y4 = -pow(x4, n)/n;
        printf("x=%f  y=%f\n", x4, y4);
        n += 1;
        x4 += 0.05;
    }

}