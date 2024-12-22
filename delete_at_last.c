#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    if(*head == NULL)\
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
        Dlist *temp=*tail;
        *tail=(*tail)->prev;
        free(temp);
        (*tail)->next=NULL;
      }
      return SUCCESS;
}