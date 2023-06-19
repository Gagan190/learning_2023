#include <stdio.h>

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end)
    {
        // Swap elements at start and end positions
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start and end towards the middle
        start++;
        end--;
    }
}

int main()
{
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    reverseArray(array, size);

    printf("\nReversed array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
