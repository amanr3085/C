#include<stdio.h>

int main() 
    {
        char ch; 
        int n,up=0,lc=0,num=0,sp=0;
        scanf("%c",&ch);
    do
    {
        if(ch>='A'&&ch<='Z')
        up++;
        else if(ch>='a'&&ch<='z')
        lc++;
        else if(ch>='1'&&ch<='9')
        num++;
        
        scanf("%c",&ch);
    }
    
    while(ch!='*');
    printf("No. of upprecase=%d\n",up);
    printf("No. of lowercase=%d\n",lc);
    printf("No. of number=%d\n",num);
    printf("No. of special character=%d\n",sp);
    

}