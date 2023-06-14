// Using if-else

#include <stdio.h>
int a, b;
int result;
int biggest_of_two_numbers(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    result = biggest_of_two_numbers(a, b);
    printf("%d", result);
    return 0;
}

// Method 2 Using ternary operator

#include <stdio.h>

int biggest_of_two_numbers(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = biggest_of_two_numbers(a, b);
    printf("The biggest number is: %d\n", result);
    return 0;
}
