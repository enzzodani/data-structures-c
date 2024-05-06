#include <stdio.h>
#include <stdlib.h>

ListNode *createNode(int data) {
  ListNode *newNode = (ListNode *) malloc(sizeof(ListNode));

  if (newNode == NULL) {
    printf("Allocation Memory\n");
    return NULL;
  }

  newNode -> data = data;
  newNode -> next = NULL;

  return newNode;
}

ListNode *insertFront(ListNode *head, int data) {

}

ListNode *insertEnd(ListNode *head, int data) {

}

void displayList(ListNode *head) {

}

void freeList(ListNode *head) {

}
