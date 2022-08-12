#include <stdio.h>
#include<math.h>

int main() {
   int n100,n50,n20,n10,n5,n2,c100,c50,c25,c10,c5,c1;
   float ftaka,fractional,coin;
   scanf("%f",&ftaka);
   int taka = ftaka;
  fractional = ftaka-taka;
   n100 = taka/100;
   taka = taka%100;
   n50=taka/50;
   taka = taka%50;
   n20=taka/20;
   taka = taka%20;
   n10=taka/10;
   taka = taka%10;
   n5=taka/5;
   taka = taka%5;
   n2=taka/2;
   taka = taka%2;

  coin = (fractional+taka)*100;
  int totalcoin = round(coin);


  c100 = totalcoin/100;
   totalcoin = totalcoin%100;
   c50=totalcoin/50;
   totalcoin = totalcoin%50;
   c25=totalcoin/25;
   totalcoin = totalcoin%25;
   c10=totalcoin/10;
   totalcoin = totalcoin%10;
   c5=totalcoin/5;
   totalcoin = totalcoin%5;
   c1=totalcoin/1;

   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",n100);
   printf("%d nota(s) de R$ 50.00\n",n50);
   printf("%d nota(s) de R$ 20.00\n",n20);
   printf("%d nota(s) de R$ 10.00\n",n10);
   printf("%d nota(s) de R$ 5.00\n",n5);
   printf("%d nota(s) de R$ 2.00\n",n2);

 printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n",c100);
   printf("%d moeda(s) de R$ 0.50\n",c50);
   printf("%d moeda(s) de R$ 0.25\n",c25);
   printf("%d moeda(s) de R$ 0.10\n",c10);
   printf("%d moeda(s) de R$ 0.05\n",c5);
   printf("%d moeda(s) de R$ 0.01\n",c1);

    return 0;
}
