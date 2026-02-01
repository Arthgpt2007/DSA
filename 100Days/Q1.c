//Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.
#include <stdio.h>

#define SIZE 10
int main()
{
    int arr[SIZE], element, position;
    printf("Enter elements\n");

    for(int i = 0; i < SIZE - 1; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("Enter the element to be inserted and the position: \n");
    scanf("%d %d", &element, &position);

    for(int j = SIZE - 2; j >= position; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[position] = element;

    printf("The new array is:\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}