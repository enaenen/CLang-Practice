#include "struct.h"

void ft_struct(void);
void printStruct(Person *p) {
    printf("%d %s %s \n size = %d\n", p->age, p->name, p->address, sizeof(p));
}

Person *initStruct(int age, char *name, char *address) {
    Person *person = (Person *) malloc(sizeof(Person));
    person->age = age;
    strcpy(person->name, name);
    strcpy(person->address, address);
    return person;
}

void ft_struct(void) {
    Person chae;
    chae.
            age = 28;
    strcpy(chae.name, "CHAE");
    strcpy(chae.address, "Seoul KOREA");
    printStruct(&chae);


    Person *chaePtr = initStruct(27, "채우주", "성남시");
    printStruct(chaePtr);


    free(chaePtr);
    chaePtr = NULL;
//    printf("%d %d\n", sizeof(chae), sizeof(chaePtr));

    int *arr;
    int *temp;

    arr = (int *) malloc(sizeof(int) * 10);
    temp = arr;
    for (
            int i = 0;
            i < 10; i++) {
        *
                arr = (i + 1);
        printf("%d ", *arr);
        arr++;
    }
    printf("\n");
    free(temp);
    arr = NULL;
}