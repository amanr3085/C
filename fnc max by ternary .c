
#include <stdio.h>

int max(int,int,int);
int main()
{
    int a,b,c,result;
    scanf("%d %d %d",&a,&b,&c);
    result=max(a,b,c);
    printf("%d",result);
    return 0;
}
int max(int x,int y,int z)

{
    return ((x>y)?(x>z?x:z):(y>z?y:z));
    
}
