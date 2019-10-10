int primeorcomposite(int);
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int flag=primeorcomposite(num);
    if(flag==1)
    printf("Prime no.");
   else
   printf("Composite no.");
    return 0;
}
int primeorcomposite(int num)
{
    int flag=0;
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        flag++;
    }
    return flag;
}