#include <stdio.h>

int main() {
    float a[6];
    int i,j,n=0;
    float sum = 0;
    for(i=0;i<6;i++){
        scanf("%f",&a[i]);
        if(a[i]>0){
            sum = sum + a[i];
            n=n+1;
        }
    }
    printf("%d valores positivos\n",n);
    printf("%0.1f\n",sum/n);
    return 0;
}
