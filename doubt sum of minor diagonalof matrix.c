
#include <stdio.h>

int main ()
{
  int n, p, i, j;
  scanf ("%d %d", &n, &p);
  int a[n][p];
  int sum=0;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < p; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }

  for (i = 0; i < n; i++)
    {
      for(j=0;j<p;j++)
      {
        if(i+j==p-1);
        sum+=a[i][j];
      }
    }
    printf ("%d",sum);

  return 0;
}
