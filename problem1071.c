#include<stdio.h>
int main()
{
    int i,x,y,a,b,n=0,sum=0;
    scanf("%d %d",&a,&b);
    if(a>b){
        y=a;
        x=b;
    }
    else{
        x=a;
        y=b;
    }
    for(i=x+1; i<y; i++)
    {
        if(i%2!=0)
        {
        sum = sum + i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
