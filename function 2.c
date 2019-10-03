
#include <stdio.h>

int add(int,int);
int main()
{
    int a,b,result;
    scanf("%d %d",&a,&b);
    result=add(a,b);
    printf("%d",result);
    return 0;
}
int add(int x,int y)

{
    return x+y;
}
