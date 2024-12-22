#include "dll.h"
Dlist *temp=NULL;
void swap(Dlist **head,Dlist **tail)
{
    temp = *head;
    *head=*tail;
    *tail=temp;
}