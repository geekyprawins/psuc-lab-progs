// Largest function to find maximum of a given list of numbers

#include <stdio.h>
int Largest(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            /* code */
        }
    }
    return largest;
}
int main()
{

    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int N;
    printf("Enter number of elemets: \n");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d elements: \n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = Largest(arr, N);
    printf("Largest number is %d ", largest);
}

// CornerSum function to fins sum of corner elements of a 2d array

#include <stdio.h>
int CornerSum(int m, int n, int arr[m][n])
{
    return arr[0][0] + arr[0][m - 1] + arr[n - 1][0] + arr[n - 1][m - 1];
}

int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int m, n;
    printf("Enter matrix dimensions: \n");
    scanf("%d%d", &m, &n);
    int arr[m][n];
    printf("Enter %d elements now: \n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Entered matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int cornerSum = CornerSum(m, n, arr);
    printf("Corner Elements Sum is %d ", cornerSum);
}
