
#include <stdio.h>

void f(int,int);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    f(a,b);
    return 0;
}
void f(int x,int y)

{
    while(x<=y)
    {
        printf("%d\n",x);
        x++;
    }
    
    
}
