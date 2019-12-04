
#include <stdio.h>

int main ()
{
   int n, p, j;
  scanf ("%d ", &n);
  int a[n][n];
  int sum=0;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }

  for (i = 0; i < n; i++)
    {
      for(j=0;j<n;j++)
      {
        if(i+j==n-1);
        sum+=a[i][j];
      }
    }
    printf ("%d",sum);

  return 0;
}
