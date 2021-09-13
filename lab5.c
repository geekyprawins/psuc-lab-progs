// find the largest and smallest element of an array
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
int n;
printf("Enter the number of elements: \n");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements now: \n", n);
for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Smallest element is %d and largest element is %d", min, max);

    return 0;
}

// print primes in given 1d array
#include <stdio.h>
#include <math.h>
int main()
{

    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements now: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The primes are: \n");
    for (int i = 0; i < n; i++)
    {
        int isPrime = 1;

        for (int j = 2; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
        {
            printf("%d \n", arr[i]);
        }
    }
    return 0;
}

// ascending and descending bubble sorting

#include <stdio.h>

int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int n, temp;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements now: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    char choice = 'a';
    printf("Press 'a' for ascending order and 'd' for descending order:\n");
    scanf(" %c", &choice);
    switch (choice)
    {
    case 'a':

        for (int i = 0; i < n - 1; i++)
        {

            for (int j = 0; j < n - i - 1; j++)
            {

                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("\nAscending order: \n");
        for (int k = 0; k < n; k++)
        {
            printf("%d\n", arr[k]);
        }

        break;
    case 'd':
        for (int i = 0; i < n - 1; i++)
        {

            for (int j = 0; j < n - i - 1; j++)
            {

                if (arr[j] < arr[j + 1])
                {
                    temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("\nDescending order: \n");
        for (int k = 0; k < n; k++)
        {
            printf("%d\n", arr[k]);
        }

        break;
    default:
        printf("Please enter a or d :)");
        break;
    }

    return 0;
}
// insert an element into an array
#include <stdio.h>

int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n + 1], new, pos;
    printf("Enter %d elements now: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element and the position to be inserted:\n");
    scanf("%d%d", &new, &pos);
    for (int i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = new;

    printf("New array is:\n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

// search entered element and delete

#include <stdio.h>

int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int n, del;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n + 1], new, pos;
    printf("Enter %d elements now: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be deleted: ");
    scanf("%d", &del);

    for (int i = 0; i < n; i++)
    {
        if (del == arr[i])
        {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("New array:\n");
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        printf("%d\t", arr[i]);
    }

    return 0;
}
