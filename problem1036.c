#include <stdio.h>
#include<math.h>

int main() {
    double A,B,C,R1,R2,broot;
    scanf("%lf %lf %lf",&A,&B,&C);
    broot = (B*B)-(4*A*C);
    if((broot<0)||(A==0.0))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-B + sqrt(broot))/(2*A);
        R2 = (-B - sqrt(broot))/(2*A);
        printf("R1 = %0.5lf\n",R1);
        printf("R2 = %0.5lf\n",R2);
    }
    return 0;

}
