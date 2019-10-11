#include <stdio.h>
void strongno ();
int main ()
{
  strongno ();
}

void strongno ()
{
  int n, n1, rem;
  int sum = 0;
  scanf ("%d", &n);
  n1 = n;
  while (n != 0)
    {
      rem = n % 10;
      int fac = 1;
      for (int i = 1; i <= rem; i++)
	{
	  fac *= i;
	}
      sum += fac;
      n = n / 10;
    }
  if (n1 == sum)
    printf ("strongno");
  else
    printf ("Not a strongno");
}
