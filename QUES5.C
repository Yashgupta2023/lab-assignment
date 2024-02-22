/*WRITE A PROGRAM IN C TO PRINT THE TRANSPOSE OF A MATRIX*/
#include /,stdio.h>
int main()
{
    int a[5][5],i,j,r,c;
    printf("enter the rows and columns of a 2d array\n");
    scanf("%d%d",&r,&c);
    for ( i = 0; i < r; i++)
    {
        for(j=0;j<cj++)
        {
            scanf("%d",&a[i][j]);
        }
    }
      for ( i = 0; i < r; i++)
    {
        for(j=0;j<cj++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
   return 0; 
}