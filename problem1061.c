#include <stdio.h>

int main() {
   char a1[5],b2[5];
   char b,c,d,e;
   int day1,hour1,min1,sec1,day2,hour2,min2,sec2,time1,time2,total;
   float time;
   scanf("%s %d",&a1,&day1);
   scanf("%d %c %d %c %d",&hour1,&b,&min1,&c,&sec1);
   scanf("%s %d",&b2,&day2);
   scanf("%d %c %d %c %d",&hour2,&d,&min2,&e,&sec2);
   time1 = 3600*hour1 + min1*60 + sec1;
   time2 = 3600*hour2 + min2*60 + sec2;
   if(time2>time1){
   total = time2 - time1;
   }
   else if(time1>time2){
       total = time1 - time2;
   }
   else {
       total = 0;
   }
   time = total/(3600.00);
   printf("%f",time);

    return 0;
}
