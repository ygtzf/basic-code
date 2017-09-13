#include <iostream>
#include <stdlib.h>
#include "list.h"

using namespace std;

List Create()
{
   List pHead;
   pHead = (List)malloc(sizeof(struct list_t));
   if (pHead == NULL)
   {
       cout << "malloc pHead error\n" << endl;
       exit(-1);
   }

   pHead->next = NULL;

   return pHead;
}

List AddEnd(List pHead, int val)
{
    List p, t_pHead = pHead;
    
    while(t_pHead->next)
    {
        t_pHead = t_pHead->next;
    }

    p = (List)malloc(sizeof(struct list_t));
    if (p == NULL)
    {
        cout << "malloc p error\n" << endl;
        exit(-1);
    }

    t_pHead->next = p;
    p->data = val;
    p->next = NULL;

    return pHead;
}

List AddHead(List pHead, int val)
{
    List p;

    p = (List)malloc(sizeof(struct list_t));
    if (p == NULL)
    {
        cout << "malloc p error\n" << endl;
        exit(-1);
    }

    p->data = val;
    p->next = pHead->next;
    pHead->next = p;

    return pHead;
}

void Print(List pHead)
{
    List p = pHead;
    
    cout << "The list is: "; 

    //while (p and p->next != NULL)
    while (p != NULL)
    {
       cout << "\t" << p->data;
       p = p->next;
    }
    cout << "" << endl;

    return;
}

List Delete(List pHead, int num)
{
    int count = 0;
    List p = pHead;
    List tp = p;

    while (p->next != NULL)
    {
        count++;
        if (num == count)
        {
            tp = p->next;
            p->next = p->next->next;
            free(tp);
            tp = NULL;
            break;
        }

        p = p->next;
    }

    return pHead;
}

void Destroy(List pHead)
{
    List p = pHead;
    List tp = p;

    while (p->next != NULL)
    {
        tp = p->next;
        p->next = p->next->next;
        free(tp);
        tp = NULL;
    }

    free(pHead);
    pHead = NULL;
}
