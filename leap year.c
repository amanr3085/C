#include<stdio.h>

int main() 
    {
    int i=1900,p=2100;
    do
    {
        if(i%4==0)
        {
        printf("Leap year=%d\n",i);
        }
        i++;
        
    }
    while(i<=p);

}