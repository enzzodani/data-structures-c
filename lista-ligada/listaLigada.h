#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode {
    int data;
    ListNode *next;
} ListNode;

typedef struct List {
  unsigned int length;
  ListNode *start;
  ListNode *end;
} List;

ListNode *createNode(int data);
List *createList(int data);
void insertStart(Node *newNode, List *list);
void insertEnd(Node *newNode, List *list);

#endif
