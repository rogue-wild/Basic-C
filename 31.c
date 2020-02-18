//To print the diagonals of input matrix...

#include <stdio.h>


int main()
{
    int matrix[10][10];
    int i,j,r,c;

    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);

    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
  printf("The matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    /*check condition to print diagonals, matrix must be square matrix*/
    if(r==c)
    {
            /*print diagonals*/
            for(i=0;i< c;i++)
            {
                for(j=0;j< r;j++)
                {

                    if(i==j)
                        printf("%d\t",matrix[j][i]);    /*print elements*/
                    else
                        printf("\t");   /*print space*/
                }
                printf("\n");   /*after each row print new line*/
            }
            for(i=0;i< c;i++)
            {
                for(j=0;j< r;j++)
                {

                    if(i==j)
                        printf("\t");
                            /*print elements*/
                    else
                         printf("%d\t",matrix[i][r-i-1]);  /*print space*/
                }
                printf("\n");   /*after each row print new line*/
            }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }
    return 0;
}
