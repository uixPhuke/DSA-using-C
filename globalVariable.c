#include <stdio.h>

int count = 10;   // External variable (global variable)

void display();   // Function declaration

int main() {
    printf("Count in main: %d\n", count);
    display();     // Call another function
    return 0;
}

void display() {
    //int count=30; 
    printf("Count in display: %d\n", count);  // Access same external variable
}
