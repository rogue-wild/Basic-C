//To find the difference between two input matrices... 

#include<stdio.h>

int main()

{
    int r, c, a[100][100], b[100][100], dif[100][100], i, j;
    printf("Name: Vishnu Bhagwat\n");
    printf("Roll. No.: 41913202718\n\n");

    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }


    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            dif[i][j]=a[i][j]-b[i][j];
        }


    printf("\nDifference of two matrix is: \n\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",dif[i][j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }

    return 0;
}
