#include <stdio.h>

int main()
{
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += array[i];
        }
        else
        {
            oddSum += array[i];
        }
    }

    int diff = evenSum - oddSum;

    printf("Sum of elements at even indexes: %d\n", evenSum);
    printf("Sum of elements at odd indexes: %d\n", oddSum);
    printf("Difference: %d\n", diff);

    return 0;
}
