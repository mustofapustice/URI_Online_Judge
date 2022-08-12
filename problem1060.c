#include <stdio.h>

int main() {
    float input;
    int i,num=0;
    for(i=1;i<=6;i++){
        scanf("%f",&input);
        if(input>=0){
           num+=1;
        }
    }
    printf("%d valores positivos\n",num);
    return 0;
}
