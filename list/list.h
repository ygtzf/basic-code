#ifndef LIST_H
#define LIST_H

struct list_t{
    int data;
    struct list_t *next;
};

typedef struct list_t *List;

List Create();
List AddEnd(List pHead, int val);
List AddHead(List pHead, int val);
void Print(List pHead);
List Delete(List pHead, int num);
void Destroy(List pHead);

#endif
