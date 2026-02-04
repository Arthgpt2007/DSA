//Reverse Array by two pointer approach
#include <stdio.h>

#define SIZE 10
int main()
{
    int arr[SIZE];
    printf("Enter %d elements\n", SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    int leftEle = 0;
    int rightEle = SIZE - 1;
    while(leftEle < rightEle)
    {
        // Swap arr[left] and arr[right]
        int temp = arr[leftEle];
        arr[leftEle] = arr[rightEle];
        arr[rightEle] = temp;

        leftEle++;
        rightEle--;
    }

    printf("Reversed array is:\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
