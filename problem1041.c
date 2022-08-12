#include <stdio.h>

int main() {
    int first,second,third,pfirst,psecond;
    scanf("%d %d %d",&first,&second,&third);
    if(first<second){
        if(first<third){
            pfirst = first;
            if(second<third){
                psecond = second;
            }
            else {
                psecond = third;
            }
        }
        else if(first>third){
            pfirst = third;
            psecond = first;
        }
    }
    else if(second<first){
        if(second<third){
            pfirst = second;
            if(first<third){
                psecond = first;
            }
            else {
                psecond = third;
            }
        }

    }

    printf("%d",pfirst);
    return 0;
}
