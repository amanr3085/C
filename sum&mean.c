#include <stdio.h>

int main()
{
int n,sump=0,sumn=0,pn=0,nn=0;
 scanf("%d",&n);
float mp,mn;
do
{
   
    if(n>0)
    {
        sump=sump+n;
        pn++;
    }
    else if(n<=0)
    {
    sumn=sumn+n;
    nn++;
    }
     scanf("%d",&n);
    }
    while(n!=-1);
    mp=(float)sump/pn;
    mn=(float)sumn/nn;
    printf("sum and mean of positive no.=%d and %.2f",sump,mp);
    printf("\nsum and mean of negative no.=%d and %.2f",sumn,mn);
}
