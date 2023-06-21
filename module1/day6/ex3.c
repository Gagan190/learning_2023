#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void displayStudents(const struct Student *students, int size)
{
    printf("Student data:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); // Consume the newline character after reading the integer

    struct Student *students = malloc(size * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].rollno);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    displayStudents(students, size);

    free(students);

    return 0;
}
