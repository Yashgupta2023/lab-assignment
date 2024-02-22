/*WRITE A PROGRAM IN C TO CALCULATE THE FREQUENCY OF AN ELEMENT IN AN ARRAY*/
#include <stdio.h>
int main()
{
    int a[10],i,n,num,k=0;
    printf("enter\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    scanf("%d",&num);
    printf("enter array elements\n");
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[i]==n)
     k=k+1;
    }
    printf("frequency = %d\n",k);
    return 0;
}

