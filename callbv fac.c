int factorial(int);
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int res=factorial(num);
    printf("%d",res);

    return 0;
}
int factorial(int num)
{
    int fac=1;
    for(int i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    return fac;
}