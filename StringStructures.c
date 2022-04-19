#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int id;
    char name[200] = "Andrew Rodriguez";
    char name2[100];

    strcpy(name2, name);

    printf("%s", name2);

    return 0;
}