#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student *students, int size)
{
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

    initializeStudents(students, size);

    // Print the initialized student data
    printf("\nInitialized student data:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}
