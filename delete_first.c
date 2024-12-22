#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
{
    if(*head == NULL)
    {
        return FAILURE;
    }
    if(*head == *tail)
    {
        free(*head);
        *head=*tail=NULL;
    }
    else
    {
        Dlist *temp=*head;
        *head=(*head)->next;
        free(temp);
        (*head)->prev=NULL;
    }
    return SUCCESS;
}