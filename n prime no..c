#include <stdio.h>

int main ()
{
  int a, b, c = 0;
  scanf ("%d %d", &a, &b);

  for (int i = 2; i <= a && c < b; i++)
    {
      int flag = 1;
      for (int j = 2; j < i; j++)
	{
	  if (i % j == 0)
	    flag = 0;
	  break;
	}
      if (flag == 1)
	{
	  printf ("%d ", i);
	  c++;
	}
    }
  return 0;
}
