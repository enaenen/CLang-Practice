//
// Created by Woo Joo Chae on 2021/12/04.
//

#ifndef CLANGP_STRUCT_H
#define CLANGP_STRUCT_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_struct(void);

typedef struct person {
    int age;
    char name[100];
    char address[100];
}Person;

#endif //CLANGP_STRUCT_H
