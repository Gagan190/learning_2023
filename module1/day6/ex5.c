#include <stdio.h>
#include <strings.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(struct Student students[], int size, const char *name)
{
    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (strcasecmp(students[i].name, name) == 0)
        {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main()
{
    struct Student students[3];

    students[0].rollno = 1;
    strcpy(students[0].name, "John");
    students[0].marks = 85.5;

    students[1].rollno = 2;
    strcpy(students[1].name, "Alice");
    students[1].marks = 92.0;

    students[2].rollno = 3;
    strcpy(students[2].name, "Bob");
    students[2].marks = 77.8;

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    // Perform search
    searchStudentByName(students, 3, searchName);

    return 0;
}
