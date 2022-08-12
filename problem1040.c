#include <stdio.h>

int main() {
    float N1,N2,N3,N4,AVG,N5,AVG2;
    scanf("%f %f %f %f ",&N1,&N2,&N3,&N4);
    AVG = (N1+N2+N3+N4)/4.0;
    printf("Media: %0.1f \n",AVG);

    if(AVG>=7.0)
    {
        printf("Aluno aprovado.\n");
    }

     if(AVG<5.0)
    {
        printf("Aluno reprovado.\n");
    }

     if((AVG>=5.0) && (AVG<=6.9))
    {
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %0.1f \n",N5);
        AVG2 = (AVG+N5)/2.0;
        if(AVG2>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(AVG<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1f \n",AVG2);
    }


    return 0;
}
