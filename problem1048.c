#include <stdio.h>

int main() {
    float salary,Readjustment,nsalary;
    scanf("%f",&salary);

    if((salary>=0) && (salary <= 400)){
        Readjustment = 0.15*salary;
        nsalary = (salary + Readjustment);
        printf("Novo salario: %0.2f\n",nsalary);
        printf("Reajuste ganho: %0.2f\n",Readjustment);
        printf("Em percentual: 15 %\n");
    }

    if((salary >= 400.01) && (salary <= 800)){
        Readjustment = 0.12*salary;
        nsalary = (salary + Readjustment);
        printf("Novo salario: %0.2f\n",nsalary);
        printf("Reajuste ganho: %0.2f\n",Readjustment);
        printf("Em percentual: 12 %\n");
    }

    if((salary >= 800.01) && (salary <= 1200)){
        Readjustment = 0.10*salary;
        nsalary = (salary + Readjustment);
        printf("Novo salario: %0.2f\n",nsalary);
        printf("Reajuste ganho: %0.2f\n",Readjustment);
        printf("Em percentual: 10 %\n");
    }

    if((salary >= 1200.01) && (salary <= 2000)){
        Readjustment = 0.07*salary;
        nsalary = (salary + Readjustment);
        printf("Novo salario: %0.2f\n",nsalary);
        printf("Reajuste ganho: %0.2f\n",Readjustment);
        printf("Em percentual: 7 %\n");
    }

    if(salary > 2000.00){
        Readjustment = 0.04*salary;
        nsalary = (salary + Readjustment);
        printf("Novo salario: %0.2f\n",nsalary);
        printf("Reajuste ganho: %0.2f\n",Readjustment);
        printf("Em percentual: 4 %\n");
    }

    return 0;
}
