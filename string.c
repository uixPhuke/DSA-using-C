#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0;

    printf("Enter name of a person with blank spaces: ");

    // Read until newline
    while ((ch = getchar()) != '\n')
    {
        str[i++] = ch;
    }
    str[i] = '\0';   // NULL terminator

    printf("\nThe input name is: %s\n", str);

    printf("The input name character by character:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }

    return 0;
}






// #include<stdio.h>

// int main(){
// char str[10];
// printf("Enter Your Name:");
// scanf("%s",str);
// printf("%s",str);

// return 0;
// }