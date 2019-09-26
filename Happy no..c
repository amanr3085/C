#include <stdio.h>
#include <math.h>
int main ()
{
  int n,n1, r, sum = 0;
  scanf ("%d", &n);
  n1=n;
  while (sum != 4 && sum != 1)
    {
      sum = 0;
      while (n != 0)
	{
	  r = n % 10;
	  sum += pow (r, 2);
	  n = n / 10;
	}
      n = sum;
    }
  if (sum == 1)
    printf ("Happy no.= %d", n1);
  else
    printf ("Not a Happy no.= %d", n1);

  return 0;
}
