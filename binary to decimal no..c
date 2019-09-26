
#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,dn=0,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        dn+=a*pow(2,i);
        n=n/10;
        i++;
    }
    printf("decimal no. is = %d",dn);

    return 0;
}
