#include <stdio.h>
#include<stlib.h>
int main()
{
    int i,n,*ptr,sum=0;
    printf("Enter no.=");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    //if memory not allocated
    if(ptr==null);
    {
        printf("Error");
        exit(0);
    }
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&(ptr+i));
        sum+=*(ptr+i);
    }
    printf("sum=%d",sum);
    free(ptr);

    return 0;
}
