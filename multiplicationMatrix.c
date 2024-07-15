#include <stdio.h>

void main()
{
    int i, j, sum = 0, A[10][10], B[10][10], mult[10][10], r1, r2, c1, c2;
    printf("enter the number of order of matrix A and B");

    printf("\nenter the number of rows of matrix A : ");
    scanf("%d", &r1);
    printf("\nenter the number of columns of matrix A : ");
    scanf("%d", &c1);

    printf("\nenter the number of rows of matrix B : ");
    scanf("%d", &r2);
    printf("\nenter the number of columns of matrix B : ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("\nMultiplication of these matrix is not possible");
    }
    else
    {
        printf("\nelements of matrix A - ");
        
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("\nenter A[%d][%d] element of matrix A : ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nelements of matrix B - ");

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("\nelement B[%d][%d] element of matrix B : ", i, j);
                scanf("%d", &B[i][j]);
            }
        }
                                    // Multiplication logic code
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (int k = 0; k < r2; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
                mult[i][j] = sum;
                sum = 0;
            }
        }

                                    // Printing matrix A
        printf("\nMatrix A is -> \n");

        for(i =0; i<r1; i++) 
        {
            for(j=0; j<c1; j++) 
            {
                printf("%d\t\t", A[i][j]);
            }
            printf("\n\n");
        }

                                    // Printing matrix B
        printf("\nMatrix B is -> \n");

        for(i =0; i<r2; i++) 
        {
            for(j=0; j<c2; j++) 
            {
                printf("%d\t\t", B[i][j]);
            }
            printf("\n\n");
        }

                                    // Multiplicated matrix
        printf("\nafter multiplying->\n\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t\t", mult[i][j]);
            }
            printf("\n\n");
        }
    }
}
