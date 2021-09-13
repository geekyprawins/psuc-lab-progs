// count no.of words in a sentence
#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");

    const int MAX = 100;
    char sent[MAX];
    printf("Enter your sentence:\n");
    gets(sent);
    puts(sent);
    int i = 0, words = 1;

    while (sent[i] != '\0')
    {
        if (sent[i] == ' ' && sent[i + 1] != ' ')
        {
            words++;
        }
        i++;
    }
    printf("Number of words are %d ", words);

    return 0;
}

// toggle the case of every character

#include <stdio.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    char string[50];
    printf("Enter your word: ");
    gets(string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            string[i] += 32;
        else if (string[i] >= 'a' && string[i] <= 'z')
            string[i] -= 32;
    }
    printf("Modified string is ");
    puts(string);

    return 0;
}

// arrange n names in alphabetical order
#include <stdio.h>
#include <string.h>
int main()
{
    printf("My name is SWAMIRAJU SATYA PRAVEEN VARMA\n");
    int i, j, n;
    char str[100][100], s[100];
    printf("Enter number of names :\n");
    scanf("%d", &n);
    printf("Enter names in any order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], s);
            }
        }
    }
    printf("\nThe sorted order of names are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}

