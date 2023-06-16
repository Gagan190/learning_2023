#include <stdio.h>

void find_smallest_largest_digits(int n, int nums[])
{
    if (n <= 0)
    {
        printf("Not Valid\n");
        return;
    }

    int i, j;
    int smallest = 9;
    int largest = 0;

    for (i = 0; i < n; i++)
    {
        int temp = nums[i];

        while (temp > 0)
        {
            int digit = temp % 10;

            if (digit < smallest)
            {
                smallest = digit;
            }

            if (digit > largest)
            {
                largest = digit;
            }

            temp /= 10;
        }
    }

    if (smallest == 9 && largest == 0)
    {
        printf("Not Valid\n");
    }
    else
    {
        printf("Smallest Digit: %d\n", smallest);
        printf("Largest Digit: %d\n", largest);
    }
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Not Valid\n");
        return 0;
    }

    int nums[n];
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    find_smallest_largest_digits(n, nums);

    return 0;
}
