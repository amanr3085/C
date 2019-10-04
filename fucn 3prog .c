#include <stdio.h>

int sum ();
int fac ();
float hour ();
int
main ()
{
  int a, b;
  float c;
  a = sum ();
  b = fac ();
  c = hour ();
  printf ("sum =%d", a);
  printf ("\nFactorial =%d", b);
  printf ("\nhour =%.2f", c);
  return 0;
}

int sum ()
{
  int n;
  scanf ("%d", &n);
  int sum = 0;
  for (int i = 0; i <= n; i++)
    {
      sum += i;
    }
  return sum;
}

int fac ()
{
  int fac = 1, n;
  scanf ("\n%d", &n);
  for (int i = 1; i <= n; i++)
    {
      fac = fac * i;
    }#include <stdio.h>

int sum();
int fac();
float hour();
int main()
{
    int a,b;
    float c;
    a=sum();
    b=fac();
    c=hour();
    printf("sum =%d",a);
    printf("\nFactorial =%d",b);
    printf("\nhour =%.2f",c);
    return 0;
}
int sum()

{ 
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int fac()
{
    int fac=1,n;
    scanf("\n%d",&n);
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;#include <stdio.h>

int sum();
int fac();
float hour();
int main()
{
    int a,b;
    float c;
    a=sum();
    b=fac();
    c=hour();
    printf("sum =%d",a);
    printf("\nFactorial =%d",b);
    printf("\nhour =%.2f",c);
    return 0;
}
int sum()

{ 
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int fac()
{
    int fac=1,n;
    scanf("\n%d",&n);
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
float hour()
{
    float min,h;
    scanf("%f",&min);
    h=(float)min/60;
    return h;
}
    }
    return fac;
}
float hour()
{
    float min,h;
    scanf("%f",&min);
    h=(float)min/60;
    return h;
}
{
  float min, h;
  scanf ("%f", &min);
  h = (float) min / 60;
  return h;
}
