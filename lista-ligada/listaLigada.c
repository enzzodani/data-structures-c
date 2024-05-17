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

void insertStart(Node *newNode, List *list)
{
  if (list->length == 0) {
    list->start = newNode;
    list->end = newNode;
    list->length = 1;
  } else {
    newNode->next = list->start;
    list->start = newNode;
    list->length += 1;
  }
}

void insertEnd(Node *newNode, List *list)
{
  if (list->length == 0) {
    list->start = newNode;
    list->end = newNode;
    list->length = 1;
  } else {
    list->end->next = newNode;
    list->end = newNode;
    list->length += 1;
  }
}
