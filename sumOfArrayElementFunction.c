#include <stdio.h>

int main()
{
    int sumOfArray(int arr[], int term);// function prototype
    int term, i, arr[10],result;

    printf("Enter the Number of Element: ");
    scanf("%d", &term);
    printf("Enter the element :\n");
    for (i = 0; i < term; i++)
    {
        scanf("%d", &arr[i]);
    }
    result=sumOfArray(arr,term);//function call
    printf("Sum of the the array element is: %d", result);
    return 0;
}

int sumOfArray(int arr[],int term)
{
    int i, sum = 0;
    for (i = 0; i < term; i++)
    {
        sum += arr[i];
    }
    return sum;
}