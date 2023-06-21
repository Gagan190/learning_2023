#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(const char *inputString, struct Student *students, int size)
{
    const char *delimiter = " ";
    char *token = strtok(inputString, delimiter);

    int i = 0;
    while (token != NULL && i < size)
    {
        students[i].rollno = atoi(token + 1); // Skip the first character, which is a double quote

        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
        i++;
    }
}

int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); // Consume the newline character after reading the integer

    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    char inputString[100];
    printf("Enter the input string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character

    parseInputString(inputString, students, size);

    // Print the parsed student data
    printf("\nParsed student data:\n");
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
