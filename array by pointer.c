#include <stdio.h>
#include <stdlib.h>
int *fun(int n)
{
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    return ptr;
}
int main()
{
    int n=5;
    int *a=fun(n);
    for(int i=0;i<n;i++)
    {
    printf("%d",*(a+i));
    }
    free(a);
    return 0;
}
