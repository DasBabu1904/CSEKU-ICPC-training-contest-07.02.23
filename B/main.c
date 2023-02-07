#include <stdio.h>


int main()
{
    int i,k,n,w,sum=0;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {

    sum=sum+i*k;

    }
    int borrow;
    borrow=sum-n;
    if(sum<=n)printf("0\n");
   else printf("%d\n",borrow);
   return 0;

}
