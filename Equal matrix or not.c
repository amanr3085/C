
#include <stdio.h>

int main ()
{
  int n, p, i, j, c = 0;
  scanf ("%d %d", &n, &p);
  int a[n][p];
  int b[n][p];
  int sum[n][p];
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < p; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < p; j++)
	{
	  scanf ("%d", &b[i][j]);
	}
    }

  for (i = 0; i < n; i++)
    {
      for (j = 0; j < p; j++)
	{
	  if (a[i][j] != b[i][j]);
	  {
	    c++;
	    break;
	  }
	}
    }
  if (c == 0)
    printf ("Equal matrix");
  else
    printf ("Not Equal");

  return 0;
}
