// check if a number is palindrome
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int number = num;
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number is %d\n", rev);
    if (rev == num)
    {
        printf("%d is a palindrome\n", number);
    }
    else
    {
        printf("%d is not a palindrome\n", number);
    }
    return 0;
}
// generate prime numbers between two numbers
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int i, j;
    printf("Primes in the range of %d and %d are : \n", num1, num2);
    while (num1 <= num2)
    {
        j = 2;

        while (j <= num1 / 2)
        {
            if (num1 % j == 0)
            {
                break;
            }
            j++;
        }
        if (j == num1 / 2 + 1)
        {
            printf("%d\n", num1);
        }

        num1++;
    }
    return 0;
}
// check if a number is angstrom number
#include <stdio.h>
#include <math.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int number = num;
    int angNum = 0;
    while (num > 0)
    {
        angNum += pow(num % 10, 3);
        num /= 10;
    }
    if (angNum == number)
    {
        printf("%d is an Angstrom number\n", number);
    }
    else
    {
        printf("%d is not an Angstrom number\n", number);
    }
    return 0;
}
// count the number of primes and composites entered by the user unitl a negative number is entered
#include <stdio.h>
#include <math.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int num, primes = 0, composites = 0;
    printf("Enter your numbers: ");
    do
    {
        scanf("%d", &num);
        if (num > 0)
        {
            int i = 2;
            while (i <= sqrt(num))
            {

                if (num % i == 0)
                {

                    composites++;
                    break;
                }
                i++;
            }
            if (i > sqrt(num))
            {
                primes++;
            }
        }
    } while (num != -1);
    printf("%d primes and %d composites\n", primes, composites);
    return 0;
}
// check whether a number is strong or not
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int number = num;
    int strong = 0;
    while (num > 0)
    {
        int i = num % 10;
        int j = i - 1;
        while (j > 0)
        {
            i *= j;

            j--;
        }
        strong += i;

        num /= 10;
    }

    if (strong == number)
    {
        printf("%d is a strong number\n", number);
    }
    else
    {
        printf("%d is not a strong number\n", number);
    }
    return 0;
}

// programs to demonstrate break and continue in while and do-while loops

#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    printf("Break in while loop\n");
    printf("Take input from users until 0 encountered- \n");
    int a;
    while (1)
    {
        printf("Enter the number:\n");
        scanf("%d", &a);
        if (a == 0)
            break;
    }

    printf("Break in do-while loop\n");
    printf("Take input from users until 0 encountered- \n");

    int b;
    do
    {

        printf("Enter the number: \n");
        scanf("%d", &b);

        if (b == 0)
            break;

    } while (1);

    printf("Continue in while loop\n");
    printf("Sum of odd numbers from 1 to 20\n");

    int i = 1, oddSum = 0;
    while (i <= 20)
    {

        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        oddSum += i;
        i++;
    }

    printf("Sum of odds = %d\n", oddSum);
    printf("Continue in do-while loop\n");
    printf("Sum of odd numbers from 1 to 20\n");
    i = 1;
    oddSum = 0;
    do
    {
        if (i % 2 == 0)
        {
            i++;
            continue;
        }
        oddSum += i;
        i++;

    } while (i <= 20);
    printf("Sum of odds = %d\n", oddSum);

    return 0;
}