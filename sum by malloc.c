#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr,sum=0;
    printf("Enter number = ");
    scanf("%d",&n);
    ptr=(int*) malloc (n*sizeof(int));
    //if memory not allocated
    if(ptr==NULL)
    {
        printf("Error");
        exit(0);
    }
    printf("Enter elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("sum=%d",sum);
    free(ptr);

    return 0;
}
