#include "dll.h"
int sign=0;
int sub(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2,Dlist **Res_head, Dlist **Res_tail)
{
        int b=0;
        int c1=0,c2=0;
        Dlist *t1=*head1;
        Dlist *t2=*head2;
        while(t1 != NULL)
        {
            t1=t1->next;
            c1++;
        }
        while(t2 != NULL)
        {
            t2=t2->next;
            c2++;
        }
        if(c1 < c2)
        {
                sign =1;
                swap(head1,head2);
                swap(tail1,tail2);
        }
        else if(c1 == c2)
        {
            t1=*tail1;
            t2=*tail2;
            while(t1 != NULL && t2 != NULL)
            {
                if(t1->data < t2->data)
                {
                    sign =1;
                    swap(head1,head2);
                    swap(tail1,tail2);
                break;
                }
                else if(t1->data > t2->data)
                {
                break;
                }
                    t1=t1->next;
                    t2=t2->next;
            }
        }
        int num1,num2;
        int barrow=0,res;
        Dlist *temp1=*tail1;
        Dlist *temp2=*tail2;
        while(temp1 != NULL || temp2 != NULL)
        {
            if(temp1 != NULL)
             num1=temp1->data;
            else
            num1 = 0;
           
            if(temp2 != NULL)
            num2=temp2->data;
            else 
            num2 = 0;
            
            if(barrow == 1)
            {
                num1=num1 - 1;
            }
            if(num1 < num2)
            {
                num1 = num1 +10;
                barrow = 1;
            }
           else{
            barrow = 0;
           }
             res = num1 - num2;
             dl_insert_first(Res_head,Res_tail,res);
             if(temp1 != NULL)
             temp1=temp1->prev;
            if(temp2 != NULL)
            temp2 = temp2->prev;

        }
        remove_zeros(Res_head,Res_tail);

        Dlist *t = *Res_head;
        while (t) {
        b = b * 10 + t->data;
        t = t->next;
         }
        return b;
        //return SUCCESS;
}