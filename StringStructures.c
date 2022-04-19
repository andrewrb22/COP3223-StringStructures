#include <stdio.h>
#include <stdlib.h>

int main(){

int id;
char name[200] = "Carlos Sanchez";

printf("Enter you Id: ");
scanf("%d", &id);
fflush(stdin);
printf("Enter your Name: ");
gets(name);

printf("\nYour name: %s\n Your ID: %d\n", name, id);

return 0;

}