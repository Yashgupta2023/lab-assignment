/*WRITE A PROGRAM IN C TO INPUT AN ELEMENT K IN AN ARRAY AND CHECK IF THE NUMBER IS GREATER THAN , EQUAL TO OR LESSER THAN THE ELEMENT*/
#include <stdio.h>
int main()
{
    int i,a[10],n,k,g,l,e;
    g=e=l=0;
    printf("enter number of elements\n");
    scanf("%d",n);
       printf("enter number of elements\n");
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            g=g+1;
        }
        else if(a[i]<k)
        {
            l=l+1;
        }
        else
        {
            e=e+1;

        }
        printf("%d%d%d",g,l,e);
        return 0;
    }


}