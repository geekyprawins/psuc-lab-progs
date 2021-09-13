// find the smallest among three numbers
#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        if (a < c)
        {
            printf("%d is the smallest\n", a);
        }
        else
        {
            printf("%d is the smallest\n", c);
        }
    }
    else
    {
        if (b < c)
        {

            
            printf("%d is the smallest\n", b);
        }
        else
        {
            printf("%d is the smallest\n", c);
        }
    }
    return 0;
}

