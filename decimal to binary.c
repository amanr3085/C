#include <stdio.h>

int main ()
{
  int dn,bn=0,p=1,rem;
  scanf ("%d",&dn);
  while(dn!=0)
  {
      rem=dn%2;
      bn=(rem*p)+bn;
      p*=10;
      dn/=2;
  }
  printf("%d",bn);
  return 0;
}
