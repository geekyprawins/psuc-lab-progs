// symmetric matrix check

#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");

    int m, n;
    int isSymmetric = 1;
    printf("Enter matrix dimensions: \n");
    scanf("%d%d", &m, &n);
    if (m != n)
    {
        printf("Matrix should be square!");
        return 0;
    }

    int arr[m][n], trans[m][n];
    printf("Enter %d elements now: \n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (trans[i][j] != arr[i][j])
            {

                isSymmetric = 0;
            }
        }
    }
    if (isSymmetric)
    {
        printf("Your matrix is symmetric!");
    }
    else
        printf("Not symmetric :(");

    return 0;
}

// trace and norm

#include <stdio.h>
#include <math.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");

    int m, n;
    printf("Enter matrix dimensions: \n");
    scanf("%d%d", &m, &n);
    if (m != n)
    {
        printf("Please enter a square matrix :)");
        return 0;
    }

    int arr[m][n];
    printf("Enter %d elements now: \n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int trace = 0, norm = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                trace += arr[i][j];
            }

            norm += pow(arr[i][j], 2);
        }
    }
    norm = sqrt(norm);
    printf("Trace = %d and norm = %d", trace, norm);
    return 0;
}

//matrix multiplication

#include <stdio.h>

int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int m, n, p, q, i, j;
    printf("Enter matrix 1 dimensions: \n");
    scanf("%d%d", &m, &n);
    printf("Enter matrix 2 dimensions: \n");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Matrix multiplication impossible!");
        return 0;
    }
    int m1[m][n], m2[p][q], res[m][q];
    printf("Enter %d elements for M1: \n", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter %d elements for M2: \n", p * q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("Product matrix is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// interchange primary and secondary diagonal elements
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");

    int m, n;
    printf("Enter matrix dimensions: \n");
    scanf("%d%d", &m, &n);
    if (m != n)
    {
        printf("Please enter a square matrix :)");
        return 0;
    }

    int arr[m][n];
    printf("Enter %d elements now: \n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Entered matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {

        int temp = arr[i][i];
        arr[i][i] = arr[i][n - i - 1];
        arr[i][n - i - 1] = temp;
    }

    printf("New matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// interchange rows and columns in a matrix
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int m, n, r1, r2, c1, c2;
    printf("Enter the matrix dimensions:\n");
    scanf("%d%d", &m, &n);
    int arr[m][n];
    printf("Enter %d elements:\n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter rows to be interchanged: \n");
    scanf("%d%d", &r1, &r2);
    for (int i = 0; i < m; i++)
    {
        int c = arr[r1 - 1][i];
        arr[r1 - 1][i] = arr[r2 - 1][i];
        arr[r2 - 1][i] = c;
    }
    printf("Enter columns to be interchanged: \n");
    scanf("%d%d", &c1, &c2);
    for (int i = 0; i < n; i++)
    {
        int r = arr[i][c1 - 1];
        arr[i][c1 - 1] = arr[i][c2 - 1];
        arr[i][c2 - 1] = r;
    }
    printf("New matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// search an element and count the number of occurences

#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int m, n;
    printf("Enter the matrix dimensions:\n");
    scanf("%d%d", &m, &n);
    int arr[m][n];
    printf("Enter %d elements:\n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int new, count = 0;
    printf("Enter the element:\n");
    scanf("%d", &new);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (new == arr[i][j])
            {
                count++;
            }
        }
    }
    printf("Your element occurred %d times", count);
    return 0;
}
