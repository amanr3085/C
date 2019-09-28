#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,a,b,c,d,nw,n1;
  scanf("%d",&n);
  n1=n;
  a=n%10;
  n=n/10;
  b=n%10;
  n=n/10;
  c=c%10;
  n=n/10;
  d=n%10;
  nw=a*1000+b*100+c*10+d;
  if(nw==n1)
    printf("Equal");
  else
    printf("Not Equal");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}