#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    float gpa;
    char *name;

} students;

int main()
{

    students s;
    s.id = 123;
    s.gpa = 3.9;
    s.name = malloc(100 * sizeof(char));

    strcpy(s.name, "Andrew Rodriguez");

    printf("ID = %d\n GPA = %.2F\n Name = %s ", s.id, s.gpa, s.name);

    return 0;
}