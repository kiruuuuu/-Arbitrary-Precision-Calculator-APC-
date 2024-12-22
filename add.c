#include "dll.h"
int add(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2,Dlist **Res_head, Dlist **Res_tail)
{
        int num1,num2;
        int carry=0,res;
        Dlist *temp1=*tail1;
        Dlist *temp2=*tail2;
        while(temp1 != NULL || temp2 != NULL || carry != 0)
        {
            if(temp1 != NULL)
            {
             num1=temp1->data;
            }
            else
            num1 = 0;

            if(temp2 != NULL)
            {
            num2 = temp2->data;
            }
            else
            num2 = 0;

            res= num1 + num2 + carry;
            carry =res / 10;
            res= res % 10;
            dl_insert_first(Res_head,Res_tail,res);
            
             if(temp1 != NULL)
             temp1=temp1->prev;
             if(temp2 != NULL)
             temp2=temp2->prev;

        }
    return SUCCESS;
}