#include "dll.h"

int division(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2,Dlist **Res_head, Dlist **Res_tail)
{
	/* Definition goes here */
	int count1 = get_count(head1);
	int count2 = get_count(head2);
	int compare_val = compare(*head1,*head2);
	if(count1 < count2)
	{
		dl_insert_first(Res_head,Res_tail,0);
		return SUCCESS;
	}
	if(compare_val < 0 && count1 == count2)
	{
		dl_insert_first(Res_head,Res_tail,0);
		return SUCCESS;
	}
	if(compare_val == 0)
	{
		dl_insert_first(Res_head,Res_tail,1);
		return SUCCESS;
	}
	Dlist *temp = *head1;
	Dlist *res1_head = NULL;
	Dlist *res1_tail = NULL;
	Dlist *res2_head = NULL;
	Dlist *res2_tail = NULL;
	int count;
	while(temp != NULL)
	{
		dl_insert_last(&res1_head,&res1_tail,temp -> data);
		temp = temp -> next;

		delete_leading_zeroes(&res1_head,&res1_tail);

		int compare_val = compare(res1_head,*head2);
		
		if(compare_val < 0)
		{
			dl_insert_last(Res_head,Res_tail,0);
			continue;
		}
		count = 0;
		while(compare(res1_head, *head2) >= 0)
		{
			sub(&res1_head,&res1_tail,head2,tail2,&res2_head,&res2_tail);
			res1_head = res2_head;
			res1_tail = res2_tail;
			res2_head = NULL;
			res2_tail = NULL;
			count++;
		}
		dl_insert_last(Res_head,Res_tail,count);
		delete_leading_zeroes(Res_head,Res_tail);
	}
	return SUCCESS;
}