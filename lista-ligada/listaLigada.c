#include <stdio.h>
#include <stdlib.h>

ListNode *createNode(int data) {
  ListNode *newNode = (ListNode *) malloc(sizeof(ListNode));

  if (newNode == NULL) {
    puts("Allocation Memory Error (createNode)");
    return NULL;
  }

  newNode -> data = data;
  newNode -> next = NULL;

  return newNode;
}

List *createList(int data) {
  List *newList = (List *) malloc(sizeof(List));

  if (newList == NULL) {
    puts("Allocation Memory Error (createList)");
  }

  newList -> lenght = 0;
  newList -> start = NULL;
  newList -> end = NULL;

  return newList;
}

