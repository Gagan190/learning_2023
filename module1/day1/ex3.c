#include <stdio.h>
// int Maximum_marks=300;
int result1, result2;
int rollno;
char name[100];
int m1, m2, m3;

int totol(int m1, int m2, int m3)
{
    return m1 + m2 + m3;
}
int percentage(m1, m2, m3)
{

    return (m1 + m2 + m3) / 3;
}

int main()
{
    printf("Enter the roll no");
    scanf("%d", &rollno);
    printf("Enter the Full name");
    scanf("%s", name);
    printf("Enter the physics marks");
    scanf("%d", &m1);
    printf("Enter the chemistry marks");
    scanf("%d", &m2);
    printf("Enter the maths marks");
    scanf("%d", &m3);
    result1 = totol(m1, m2, m3);
    result2 = percentage(m1, m2, m3);

    printf("The totol marks is:%d", result1);
    printf("The totol percentage is:%d", result2);
}