#include <stdio.h>

int main() {
  float input,a,b,c,total,extra1,extra2,extra3;
  scanf("%f",&input);
  if(input>2000){
  a=input-2000;
  if(a>1000){
      b=a-1000;
      extra1 = 1000*0.08;
      if(b>1500){
          c = b-1500;
          extra2 = 1500*0.18;
          extra3 = c*0.28;
          total = extra1 + extra2 + extra3;
          printf("R$ %0.2f",total);
      }
      else{
          extra2 = b*0.18;
          total = extra1 + extra2;
          printf("R$ %0.2f",total);
      }
  }
  else{
      extra1 = a*0.08;
      total = extra1;
      printf("R$ %0.2f",total);
  }
  }
  else{
      printf("Isento\n");
  }

    return 0;
}
