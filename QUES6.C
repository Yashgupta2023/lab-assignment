/*WRITE A PROGRAM IN C TO FIND THE SUM OF ROWS AND COLUMNS IN A MATRIX*/
#include <stdio.h>
int main()
{
    int i,j,r,c,a[5][5],k=0,sum,sum2;
      printf("enter the rows\n");
    scanf("%d",&r);
     printf("enter the columns\n");
    scanf("%d",&c);
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",&a[i][j]);
        }
         printf("\n");
    }
    
     for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
           sum=sum+a[i][j];
        }
         printf("sum of rows is%d\n",sum);
    }

    
     for(i=0;i<r;i++)
    {
        sum2=0;
        for(j=0;j<c;j++)
        {
            sum2=sum2+a[i][j];
        }
         printf("sum of columns is%d\n",sum2);
    }
     
}