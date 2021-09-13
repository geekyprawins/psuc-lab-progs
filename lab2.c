// check a number is even or odd
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is even", number);
    }
    else
    {
        printf("%d is odd", number);
    }
    return 0;
}
// find largest among 3 numbers
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("Enter a number: ");
    scanf("%d", &c);
    if (a > b)
    {

        if (a > c)
        {
            printf("%d is the largest number", a);
        }
        else
        {
            printf("%d is the largest number", c);
        }
    }

    else
    {
        if (b > c)
        {
            printf("%d is the largest number", b);
        }
        else
        {
            printf("%d is the largest number", c);
        }
    }

    return 0;
}
// swap 2 numbers
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping,\n");
    printf("a = %d, b = %d", a, b);
    return 0;
}
// roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    float a, b, c;
    float root1, root2, imaginary, disc;
    printf("Enter value of 'a' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &a);
    printf("Enter value of 'b' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &b);
    printf("Enter values of 'c' of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &c);
    // Find discriminant of the equation
    disc = (b * b) - (4 * a * c);
    switch (disc > 0)
    {
    case 1:
        // If discriminant is positive
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Two distinct and real roots exists: %.2f and %.2f",
               root1, root2);
        break;
    case 0:
        // If discriminant is not positive
        switch (disc < 0)
        {
        case 1:
            // If discriminant is negative
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-disc) / (2 * a);
            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   root1, imaginary, root2, imaginary);
            break;
        case 0:
            // If discriminant is zero
            root1 = root2 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
            break;
        }
    }
    return 0;
}
// evaluate y from x
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int x, y;
    printf("Enter value for x: ");
    scanf("%d", &x);
    if (x > 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("Value of y is %d", y);
    return 0;
}
// find smallest among 3 numbers using ternary operator

#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int a, b, c, smallest;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("Enter a number: ");
    scanf("%d", &c);

    smallest = (a < b) ? (a < c) ? a : c : (b < c) ? b
                                                   : c;
    printf("%d is the smallest number", smallest);
    return 0;
}
// if (a < b)
// {
//     if (a < c)
//     {
//         printf("%d is the smallest number", a);
//     }
//     else
//     {
//         printf("%d is the smallest number", c);
//     }
// }
// else
// {
//     if (b < c)
//     {
//         printf("%d is the smallest number", b);
//     }
//     else
//     {
//         printf("%d is the smallest number", c);
//     }
// }
