#include "dll.h"
int mul(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2,Dlist **Res_head, Dlist **Res_tail,Dlist **Res_head1, Dlist **Res_tail1,Dlist **Res_head2, Dlist **Res_tail2)
{
    int carry = 0,res=0,count=0;
    Dlist *temp1 = *tail1;
    Dlist *temp2 = *tail2;
    int num1,num2;
    *Res_head=0;
    *Res_head2=NULL;
    while(temp2 != NULL )
    {
       num1 = temp2->data;
       temp1=*tail1;
       carry = 0;
      while(temp1 != NULL)
      {
        num2 = temp1->data;
        res= (num1 * num2) + carry;
        carry = res/10;
        res= res %10;
        dl_insert_first(Res_head1,Res_tail1,res);
        temp1 =temp1->prev;
       }
        count++;
        if(carry)
        dl_insert_first(Res_head1,Res_tail1,carry);
        add(Res_head1,Res_tail1,Res_head,Res_tail,Res_head2,Res_tail2);
        dl_delete_list(Res_head1,Res_tail1);
        *Res_head=*Res_head2;
        *Res_tail=*Res_tail2;
        *Res_head2=NULL;
        *Res_tail2=NULL;
        *Res_head1=NULL;
        *Res_tail1=NULL;
        for(int i=0;i<count;i++)
        {
            dl_insert_first(Res_head1,Res_tail1,0);
        }
        temp2 =temp2->prev;
    }
    return SUCCESS;
}