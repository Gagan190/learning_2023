#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void sortStudentsDescending(struct Student *students, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (students[j].marks < students[j + 1].marks)
            {
                // Swap the students
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

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

    sortStudentsDescending(students, size);

    printf("Sorted student data in descending order based on marks:\n");
    displayStudents(students, size);

    free(students);

    return 0;
}
