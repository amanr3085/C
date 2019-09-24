#include <stdio.h>
#include<math.h>
int main()
{
    int n,n1,c=0,rem,sum=0,n2;
    scanf("%d",&n);
    n1=n;
    n2=n;
     while(n!=0)
     {
         c++;
         n=n/10;
     }
     while(n1!=0)
     {
         rem=n1%10;
     sum+=pow(rem,c);
     n1=n1/10;
     }
     if(n2==sum)
     printf("%d is armstrong no.",n2);
     else
     printf("%d is not armstrong no.",n2);

    return 0;
}