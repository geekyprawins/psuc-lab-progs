// generate multiplication table for n numbers upto k terms
#include <stdio.h>
int main()
{

    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");

    int n, k;
    printf("Enter n and k: \n");
    scanf("%d%d", &n, &k);

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
// floyds triangle
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}
// sine series upto n terms
#include <stdio.h>
#define PI 3.141592
#include <math.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int n;
    float x, no, term, sum, i;
    printf("Enter n and x: \n");
    scanf("%d %f", &n, &x);
    no = x;
    x = x * PI / 180.0;      // degrees to radians conversion
    term = x;                // first term value
    sum = x;                 //term stored in sum
    for (i = 1; i <= n; i++) //compute & sum for second term onwards
    {
        term = term * (((-1) * x * x) / (2 * i * (2 * i + 1)));
        sum += term;
    }
    printf("Library value of Sin(%.2f) = %.2f ", no, sin(x));
    printf("\nSin (%.2f) = %.2f", no, sum);
    return 0;
}
// check if a number is perfect or not
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("%d is a perfect number", n);
    }
    else
    {
        printf("%d is not a perfect number", n);
    }
    return 0;
}
// find the generic root of a number
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int Number, Sum, Reminder;

    printf("\n Please Enter any number\n");
    scanf("%d", &Number);

    while (Number >= 10)
    {
        for (Sum = 0; Number > 0; Number = Number / 10)
        {
            Reminder = Number % 10;
            Sum = Sum + Reminder;
        }
        if (Sum >= 10)
        {
            Number = Sum;
        }
        else
        {
            printf("\n The Generic Root of a Given Number = %d", Sum);
            return 0;
        }
    }
}
// demonstrate break and continue in for loop

#include <stdio.h>

int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    //break demostratation
    // Program to calculate the sum of numbers (10 numbers max)
    // If the user enters a negative number, the loop terminates
    int i;
    float number, sum = 0;
    printf("break statement demo\n");
    for (i = 1; i <= 10; ++i)
    {
        printf("Enter n%d: ", i);
        scanf("%f", &number);

        // if the user enters a negative number, break the loop
        if (number < 0)
        {
            break;
        }

        sum += number; // sum = sum + number;
    }

    printf("Sum = %f\n", sum);

    //  continue demostratation
    // Program to calculate the sum of numbers (10 numbers max)
    // If the user enters a negative number, it's not added to the result
    printf("\ncontinue statement demo\n");
    int j;
    float num, Sum = 0;

    for (i = 1; i <= 10; ++i)
    {
        printf("Enter a n%d: ", i);
        scanf("%f", &num);

        if (num < 0)
        {
            continue;
        }

        Sum += num; // sum = sum + number;
    }

    printf("Sum = %f\n", Sum);

    return 0;
}







