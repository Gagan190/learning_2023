#include <stdio.h>

void swap(void *a, void *b, size_t size)
{
    char *temp = (char *)malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main()
{
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y, sizeof(int));

    printf("After swapping: x = %d, y = %d\n", x, y);

    double a = 3.14, b = 2.71;
    printf("Before swapping: a = %lf, b = %lf\n", a, b);

    swap(&a, &b, sizeof(double));

    printf("After swapping: a = %lf, b = %lf\n", a, b);

    return 0;
}