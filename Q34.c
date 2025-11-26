/*
WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major
order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix
format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in
case of incompatibility.
*/

#include <stdio.h>
int main() 
{
    int m, n, p, q;
    printf("Enter the rows and columns for matrix A : \n");
    printf("Enter the number of rows : ");
    scanf("%d", &m);
    printf("Enter the number of columns : ");
    scanf("%d", &n);
    int A[m][n];
    printf("Enter elements of matrix A (row-wise) : \n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the rows and columns for matrix B : \n");
    printf("Enter the number of rows : ");
    scanf("%d", &p);
    printf("Enter the number of columns : ");
    scanf("%d", &q);
    int B[p][q];
    printf("Enter elements of matrix B (row-wise) : \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }
    if (n != p) 
    {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 0;
    }
    int C[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++) 
        {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printf("Matrix A : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B : \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++) 
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Resultant Matrix (A x B) : \n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}