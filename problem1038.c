#include <stdio.h>

int main() {
    int X,Y;
    float prize;
    scanf("%d %d",&X,&Y);
    switch(X)
    {
    case 1:
    prize = Y*4.00;
    printf("Total: R$ %0.2f\n",prize);
    break;

    case 2:
    prize = Y*4.50;
    printf("Total: R$ %0.2f\n",prize);
    break;

    case 3:
    prize = Y*5.00;
    printf("Total: R$ %0.2f\n",prize);
    break;

    case 4:
    prize = Y*2.00;
    printf("Total: R$ %0.2f\n",prize);
    break;

    case 5:
    prize = Y*1.50;
    printf("Total: R$ %0.2f\n",prize);
    break;
    }

    return 0;
}
