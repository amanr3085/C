#include <stdio.h>
#include <stdlib.h>
void fun()
{
    int n=4;
    int *ptr;
    ptr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    int m=8;
    int *ptr2=(int*)realloc(ptr,sizeof(int)*m);
     for(int i=0;i<n;i++)
    {
        printf("%d  ",(ptr+i));
    }

     for(int i=n;i<m;i++)
    {
        scanf("%d",ptr2+i);
    }
     for(int i=0;i<m;i++)
    {
        printf("%d  ",*(ptr2+i));
    }
    free(ptr);
}
int main()
{
    fun();
}
