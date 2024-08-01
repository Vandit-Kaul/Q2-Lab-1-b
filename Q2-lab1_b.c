#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the size of m: ");
    scanf("%d", &m);
    printf("Enter the size of n: ");
    scanf("%d", &n);

    int arr[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int transpose[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("The transposed matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
