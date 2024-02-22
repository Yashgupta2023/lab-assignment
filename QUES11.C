/*WRITE A RECURSIVE PROGRAM IN C TO FIND FACTORIAL OF A NUMBER*/
#include <stdio.h>
int fact(int)
int main()
{
    int n,res;
    res=fact(n);
    printf("%d",res);
    return 0;
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    return(n*fact(n-1));
}