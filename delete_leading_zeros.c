#include "dll.h"

void delete_leading_zeroes(Dlist **head,Dlist **tail)
{
	Dlist *temp = *head;
	while(temp != NULL && temp -> data == 0)
	{
		dl_delete_first(head,tail);
		temp = temp -> next;
	}
	if(*head == NULL)
		dl_insert_first(head,tail,0);
}