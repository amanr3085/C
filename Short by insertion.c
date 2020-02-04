
#include <stdio.h>

int main()
{
    int i,j,key;
    int abc[5]={3,1,23,45,27};
    for(i=0;i<5;i++)
    {   j=i;
        key =abc[i];
        j=j-1;
        while(j>=0&&abc[j]>key)
        {
            abc[j+1]=abc[j];
            j=j-1;
        }
        abc[j+1]=key;
    }
    for(i=0;i<5;i++)
    {
    printf("%d  ",abc[i]);
    }

    return 0;
}
