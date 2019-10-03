
#include <stdio.h>
int add(int x,int y)

{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int main()
{
    int a,b,aresult,sresult;
    scanf("%d %d",&a,&b);
    aresult=add(a,b);
    sresult=sub(a,b);
    printf("%d",aresult);
    printf("\n%d",sresult);
    return 0;
}
