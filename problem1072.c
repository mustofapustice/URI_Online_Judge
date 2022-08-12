#include <stdio.h>

int main() {
    int N,i,n=0,a;
    scanf("%d",&N);
    int x[N];
    for(i=0;i<N;i++){
        scanf("%d",&x[i]);
        if((x[i]>=10) && (x[i]<=20)){
            n+=1;
        }
    }
    a = N - n;
    printf("%d in\n",n);
    printf("%d out\n",a);
    return 0;
}
