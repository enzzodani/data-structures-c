#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode {
    int data;
    ListNode *next;
} ListNode;

typedef struct root {
  ListNode *first;
}

ListNode *createNode(int data);
ListNode *insertFront(ListNode *head, int data);
ListNode *insertEnd(ListNode *head, int data);
void displayList(ListNode *head);
void freeList(ListNode *head);

#endif
