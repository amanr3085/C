#include <stdio.h>
int happyno (int);
int main ()
{
  int n;
  scanf ("%d", &n);
  int a = happyno (n);
  if (a == 1)
    printf ("Happy no");
  else
    printf ("Not Happy no");
}

int
happyno (int n)
{
  while (n != 1 && n != 4)
    {
      int sum = 0, rem;
      while (n != 0)
	{
	  rem = n % 10;
	  sum += rem * rem;
	  n = n / 10;
	}
      n = sum;
    }
  return n;
}
