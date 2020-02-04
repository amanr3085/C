#include <stdio.h>

int main()
{
    int i,j,small, index,temp;
    int a[5]={1,23,5,3,7};
    for(i=0;i<5;i++)
    {
        small=a[i];
        index=i;
        for( j=i;j<5;j++)
        {
            if(a[j]<a[i])
            {
                small=a[j];
                index=j;
            }
        }
                temp=a[i];
                a[i]=small;
                a[index]=temp;

    }
    for(int i=0;i<5;i++)
    {
        printf("%d  ",a[i]);
    }
    

    return 0;
}
