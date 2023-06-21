#include <stdio.h>

struct Box
{
    double length;
    double width;
    double height;
};

void calculateVolumeAndSurfaceArea(struct Box *box, double *volume, double *surfaceArea)
{
    *volume = box->length * box->width * box->height;
    *surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main()
{
    struct Box myBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &(myBox.length));

    printf("Enter the width of the box: ");
    scanf("%lf", &(myBox.width));

    printf("Enter the height of the box: ");
    scanf("%lf", &(myBox.height));

    struct Box *boxPtr = &myBox;

    double volume, surfaceArea;
    calculateVolumeAndSurfaceArea(boxPtr, &volume, &surfaceArea);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
