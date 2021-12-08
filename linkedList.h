//
// Created by Woo Joo Chae on 2021/12/04.
//

#ifndef CLANGP_LINKEDLIST_H
#define CLANGP_LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void linkedList();

typedef struct listNode {
    int data;
    struct listNode *pLink;
} ListNode;

typedef struct singleListType {
    ListNode pHead;
    int count;
} SingleListType;

SingleListType myList;

int addElement(int data, int index);
int removeElement(int index);
bool isEmpty();
void printLinkedList();

#endif //CLANGP_LINKEDLIST_H
