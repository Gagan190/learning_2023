#include <stdio.h>

int remove_digit(int num, int pos)
{
    int power = 1;
    int temp = num;

    while (temp / 10 > 0)
    {
        power *= 10;
        temp /= 10;
    }

    int left = num / (power * 10);
    int right = num % power;

    if (pos == 0)
    {
        return right;
    }
    else if (pos == 3)
    {
        return left;
    }
    else
    {
        return (left * power) + right;
    }
}

int find_largest_number(int num)
{
    int largest = 0;
    int i;

    for (i = 0; i < 4; i++)
    {
        int temp = remove_digit(num, i);
        if (temp > largest)
        {
            largest = temp;
        }
    }

    return largest;
}

int main()
{
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = find_largest_number(num);

    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}
