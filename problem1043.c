#include <stdio.h>

int main() {
    float A,B,C,small1,small2,big;
    double perimeter,area;
    scanf("%f %f %f",&A,&B,&C);

    if(((A+B)>C)&&((B+C)>A)&&((C+A)>B)){
        perimeter = A+B+C;
        printf("Perimetro = %0.1lf\n",perimeter);
    }
    else {
        area = 0.5*(A+B)*C;
        printf("Area = %0.1lf\n",area);
    }
    return 0;
}
