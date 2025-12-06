#include <stdio.h>
#include <string.h>

void sortStrings(char str[10][50]);  // Function declaration

int main() {
    char str[10][50];
    int i;

    printf("Enter 10 strings:\n");
    for (i = 0; i < 10; i++) {
        scanf("%s", str[i]);
    }

    sortStrings(str);   // Function call

    printf("\nStrings in Lexicographical Order:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

// Function Definition
void sortStrings(char str[10][50]) {
    char temp[50];
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(str[i], str[j]) > 0) { // compare strings
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}
