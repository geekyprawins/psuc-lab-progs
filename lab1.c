// // add two numbers
// #include <stdio.h>

// int main()
// {
//     printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");

//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     int sum = a + b;
//     printf("%d + %d = %d\n", a, b, sum);
//     return 0;
// }
// // sum , difference, product, quotient
// #include <stdio.h>
// int main()
// {
//     printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");

//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     int sum = a + b;
//     int difference = a - b;
//     int product = a * b;
//     int quotient = a / b;
//     printf("%d + %d = %d\n", a, b, sum);
//     printf("%d - %d = %d\n", a, b, difference);
//     printf("%d * %d = %d\n", a, b, product);
//     printf("%d / %d = %d\n", a, b, quotient);
//     return 0;
// }
// // ASCII value of a character
// #include <stdio.h>
// int main()
// {
//     printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     printf("ASCII value of %c is %d\n", ch, ch);
//     return 0;
// }
// display the size of the data type int, char, float, double, long int and long double
// #include <stdio.h>
// int main()
// {
//     printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
//     printf("Size of int : %d bytes\n", sizeof(int));
//     printf("Size of char: %d bytes\n", sizeof(char));
//     printf("Size of float: %d bytes\n", sizeof(float));
//     printf("Size of double: %d bytes\n", sizeof(double));
//     printf("Size of long int: %d bytes\n", sizeof(long int));
//     printf("Size of long double: %d bytes\n", sizeof(long double));
//     return 0;
// }

// // compute simple interest and compound interest
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
//     float p, n, r;
//     printf("Enter the principal amount: ");
//     scanf("%f", &p);
//     printf("Enter the number of years: ");
//     scanf("%f", &n);
//     printf("Enter the rate of interest: ");
//     scanf("%f", &r);
//     float si = (p * n * r) / 100;
//     float ci = (p * pow(1 + r / 100, n)) - p;
//     printf("Simple interest is %f\n", si);
//     printf("Compound interest is %f\n", ci);
//     return 0;
// }
// // find volume and surface area of a sphere
// #include <stdio.h>
// #include <math.h>
// #define M_PI 3.14159265358979323846
// int main()
// {
//     printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
//     float r;
//     printf("Enter the radius of the sphere: ");
//     scanf("%f", &r);
//     float v = 4 * M_PI * pow(r, 3) / 3;
//     float s = 4 * M_PI * pow(r, 2);
//     printf("Volume of the sphere is %f\n", v);
//     printf("Surface area of the sphere is %f\n", s);
//     return 0;
// }

// // fahrenheit to celsius
// #include <stdio.h>
// int main()
// {
//     printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
//     float f, c;
//     printf("Enter the temperature in Fahrenheit: ");
//     scanf("%f", &f);
//     c = (f - 32) * 5 / 9;
//     printf("Temperature in Celsius is %f\n", c);
//     return 0;
// }

// // evaluate given expressions
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    float a = 30, b = 10, c = 5, d = 15;
    printf("Using float data type : \n");
    printf("i) %f\n", (a + b) * c / d);
    printf("ii) %f\n", ((a + b) * c) / d);
    printf("iii) %f\n", a + (b * c) / d);
    printf("iv) %f\n", (a + b) * (c / d));
    int e = 30, f = 10, g = 5, h = 15;
    printf("Using int data type : \n");
    printf("i) %d\n", (e + f) * g / h);
    printf("ii) %d\n", ((e + f) * g) / h);
    printf("iii) %d\n", e + (f * g) / h);
    printf("iv) %d\n", (e + f) * (g / h));
    return 0;
}