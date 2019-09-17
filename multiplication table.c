#include<stdio.h>

int main() {
    
    int n,m=1,res;
    scanf("%d",&n);
    while(m<=10)
    {
        res=m*n;
    m++;
    printf("%d\n",res);
    }
}