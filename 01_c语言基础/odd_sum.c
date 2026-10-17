#include <stdio.h>
int main()
{
    int i,n;
    n=0;
    for(i=0;i<=100;i++)
    {
        if(i%2==1)
        n=n+i;
        
    }printf("奇数和为%d",n);
    return 0;
}