/*WRITE A PROGRAM IN C TO FIND THE SUM OF TWO MATRICES*/
#include <stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],r,c,i,j;
    printf("enter rows and columns of first 2d array\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
      printf("enter rows and columns of second 2d array\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
       for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);

        }
        printf("\n");


    }
    return 0;
}