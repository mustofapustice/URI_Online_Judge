#include<stdio.h>
int main()
{
    int i,x,n=0;
    scanf("%d",&x);
    for(i=x; i<x+12; i++)
    {
        if(i%2!=0)
        {
        printf("%d\n",i);
        n+=1;
        }
        if(n==6){
        break;
        }
    }
    return 0;
}
