#include "dll.h"

int get_count(Dlist **head)
{
    int count =0;
    Dlist *temp=*head;
    while(temp != NULL)
    {
        count++;
        temp = temp ->next;
    }
    return count;
}