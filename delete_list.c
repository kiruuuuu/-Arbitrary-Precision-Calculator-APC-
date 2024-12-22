#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
     if(*head == NULL)
     return FAILURE;
     while(*head !=NULL)
     {
        dl_delete_first(head,tail);
     }
     return SUCCESS;
}