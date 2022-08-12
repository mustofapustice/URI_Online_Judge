#include <stdio.h>
#include<math.h>
int main() {
    int sth,stm,endh,endm,stime,etime,diftime,hour,tmin;
    float durhour,dumin,min;
    scanf("%d %d %d %d",&sth,&stm,&endh,&endm);
    stime=(60*sth)+stm;
    etime=(60*endh)+endm;
    diftime=etime-stime;
    if(diftime<=0){
        diftime = diftime + (24*60);
    }
    durhour=diftime/60.0;

    hour = durhour;
    dumin = durhour - hour;
    min = dumin * 60.0;
    tmin = round(min);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,tmin);
    return 0;
}
