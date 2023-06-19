#include <stdio.h>

int main()
{
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]); // calculate the size of the array

    int sum = 0;
    int i;

    // Calculate the sum of array elements
    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }

    float average = (float)sum / size; // calculate the average

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
