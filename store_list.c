#include "dll.h"
int store_list(char *str,Dlist **head,Dlist **tail)
{
    int i=0;
    int res=0;
    while(str[i])
    {
        res=str[i]- 48;
        dl_insert_last(head,tail,res);
        i++;
    }
    return SUCCESS;
}