/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
************************************************************/
#include <stdio.h>

int main()
{
  int n,p,i,j;
  scanf("%d %d",&n,&p);
  int a[n][p];
  int b[n][p];
  int sum[n][p];
  for(i=0;i<n;i++)
  {
    for(j=0;j<p;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
    for(i=0;i<n;i++)
  {
    for(j=0;j<p;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }

for(i=0;i<n;i++)
  {
    for(j=0;j<p;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];
      printf("%d\t",sum[i][j]);
    }
    printf("\n");
  }
    return 0;
}
