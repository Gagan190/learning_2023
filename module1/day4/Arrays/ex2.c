#include <stdio.h>

int main()
{
    int array[] = {5, 10, 3, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);

    int min = array[0]; // assume the first element as the minimum
    int max = array[0]; // assume the first element as the maximum

    int i;

    // Find the minimum and maximum values
    for (i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
