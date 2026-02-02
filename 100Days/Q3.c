//Deletion
#include <stdio.h>

#define SIZE 10
int main()
{
    int arr[SIZE], position, item;
    printf("Enter elements\n");
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to be deleted: \n");
    scanf("%d", &position);

    item = arr[position];

    for(int j = position; j < SIZE - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    printf("The new array is:\n");
    for(int i = 0; i < SIZE - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe deleted item is: %d\n", item);
}