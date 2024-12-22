#include "dll.h"
void remove_zeros(Dlist **head,Dlist **tail)
{
    Dlist *temp =*head;
    while(temp -> next != NULL)
    {
        if(temp -> data == 0)
        {
            temp =temp -> next;
            if(dl_delete_first(head,tail) == SUCCESS)
            continue;
        }
        else
        return;
    }
}