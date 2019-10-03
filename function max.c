
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
    if(x>y)
    {
        if(x>z)
        return x;
        else
        return z;
    }
    else if(y>z)
    
    return y;
    else 
    return z;
    
}
