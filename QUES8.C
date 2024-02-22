/*WRITE A PROGRAM IN C TO CALCULATE THE SUM OF EVEN ELEMENTS AND SUN OF EDD ELEMENTS IN AN ARRAY*/
#include <stdio.h>
int main()
{
    int a[10],se=0,so=0,n,i;
    printf("enter\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            se=se+a[i];

        }
        else{
            so=so+a[i];
        }
        printf("%d%d",se,so);
    }

}