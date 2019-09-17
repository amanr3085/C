#include<stdio.h>

int main() {
    
    int n,m,b,a=1,sum=0;
    scanf("%d",&n);
    while(m!=0)
    {
        m=n/a;
        b=m%10;
        a=a*10;
        sum+=b;
    }
    printf("Sum of digit = %d", sum);
}