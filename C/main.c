#include <stdio.h>
#include <stdlib.h>
int Calculation(int a,int b);

int main()
{
    int n,k,answ;
    scanf("%d%d",&n,&k);
    answ=Calculation(512,4);
    printf("%d",answ);
}

int Calculation(int a,int b){
    int i;
    for(int i=0;i<b;i++)
    {
        if(a%10==0)a=a/10;
        else a--;
    }
    return a;
}

