#include "dll.h"
extern int sign;
int main(int argc,char *argv[])
{
    	Dlist *head1 = NULL; /* initialize the header to NULL */
	    Dlist *tail1 = NULL; /* initialize the tail to NULL */
        Dlist *head2 = NULL; /* initialize the header to NULL */
	    Dlist *tail2 = NULL; /* initialize the tail to NULL */
        Dlist *Res_head = NULL; /* initialize the header to NULL */
	    Dlist *Res_tail = NULL; /* initialize the tail to NULL */
		Dlist *Res_head1 = NULL; /* initialize the header to NULL */
	    Dlist *Res_tail1 = NULL; /* initialize the tail to NULL */
		Dlist *Res_head2 = NULL; /* initialize the header to NULL */
	    Dlist *Res_tail2 = NULL; /* initialize the tail to NULL */

int list_to_num(Dlist *head)
{
	int b=0;
	while(head)
	{
		b= b*10 + head->data;
		head = head->next;
	}
	return b;
}
	char str[100]; // Adjust size as needed
    char str1[100];
    strcpy(str, argv[1]);
    strcpy(str1, argv[3]);

    int i = 0,b;
		if(strcmp(argv[2],"+")== 0)
		{
        if (str[0] == '-' && str1[0] != '-') {
            
             str[0] = '0'; 
             store_list(str, &head1, &tail1);
             store_list(str1, &head2, &tail2);
			           
                        swap(&head1, &head2);
                        swap(&tail1, &tail2);

                   b = sub(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail) ;
				   printf("INFO : OPERATION SUCCESSFULL\n");
				   printf("Result : ");
				   printf("%d\n",b*-1);
		}
				else if(str[0] == '-' && str1[0] == '-')
				{
					str[0] ='0';
					str1[0] = '0';
					
					store_list(str,&head1,&tail1);
		            store_list(str1,&head2,&tail2);

                        
				       add(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
					   b =list_to_num(Res_head);
					   printf("INFO : OPERATION SUCCESSFULL\n");
					   printf("Result : ");
					   printf("%d\n",b*-1);

				}
				else if(str[0] != '+' && str1[0] != '-')
				{
						store_list(argv[1],&head1,&tail1);
						store_list(argv[3],&head2,&tail2);
						
				       add(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
					   printf("INFO : OPERATION SUCCESSFULL\n");
				       printf("Result : ");
                       print_list(Res_head);
		}
		else if(str[0] != '+' && str1[0] == '-')
		{
			str1[0] ='0';
			store_list(str, &head1, &tail1);
			store_list(str1, &head2, &tail2);
			
			b = sub(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail) ;
			printf("INFO : OPERATION SUCCESSFULL\n");
			printf("Result : ");
			printf("%d\n",b);
		}
		}
		else if(strcmp(argv[2],"-")== 0)
		{
				if(str[0] == '-' && str1[0] != '-')
				{
				                str[0] = '0';
                                store_list(str,&head1,&tail1);
		                        store_list(str1,&head2,&tail2);
                                
				                add(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
                                b = list_to_num(Res_head);
								printf("INFO : OPERATION SUCCESSFULL\n");				
								printf("Result: ");
                                printf("%d\n",b*-1);
				}
				else if(str[0] != '-' && str1[0] != '-')
				{
					 store_list(argv[1],&head1,&tail1);
		             store_list(argv[3],&head2,&tail2);
                    
					 remove_zeros(&head2,&tail2);
				   b = sub(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
				   printf("INFO : OPERATION SUCCESSFULL\n");			   
				   printf("Result : ");
				   printf("%d\n",b);
				}
				else if(str[0] == '+' && str1[0] != '-')
		        {
						str[0] ='0';
						store_list(str, &head1, &tail1);
						store_list(str1, &head2, &tail2);
						
						b = sub(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
						printf("INFO : OPERATION SUCCESSFULL\n");
						printf("Result : ");
						printf("%d\n",b);
		        }
				else if(str[0] == '-' && str1[0] == '-')
				{
					str[0] ='0';
					str1[0] = '0';
					
					store_list(str,&head1,&tail1);
		            store_list(str1,&head2,&tail2);

                        
				        b = sub(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
					   printf("INFO : OPERATION SUCCESSFULL\n");
						printf("Result : ");
						printf("%d\n",b*-1);

				}
				else if(str[0] != '-' && str1[0] == '-')
				{
				                str1[0] = '0';
                                store_list(str,&head1,&tail1);
		                        store_list(str1,&head2,&tail2);
                                
				                add(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
                                b = list_to_num(Res_head);
					            printf("INFO : OPERATION SUCCESSFULL\n");
								printf("Result: ");
                                printf("%d\n",b);
				}
		}
		else if(strcmp(argv[2],"x") == 0)
		{
			    if(str[0] == '-' && str1[0] == '-')
				{
					str[0] ='0';
					str1[0] = '0';
					
					store_list(str,&head1,&tail1);
		            store_list(str1,&head2,&tail2);

                        
				        mul(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail,&Res_head1,&Res_tail1,&Res_head2,&Res_tail2);
						b = list_to_num(Res_head);
				       printf("INFO : OPERATION SUCCESSFULL\n");
						printf("Result : ");
						printf("%d\n",b);

				}
				else if(str[0] != '-' && str1[0] == '-')
				{
				                str1[0] = '0';
                                store_list(str,&head1,&tail1);
		                        store_list(str1,&head2,&tail2);
                                
				                 mul(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail,&Res_head1,&Res_tail1,&Res_head2,&Res_tail2);
								b = list_to_num(Res_head);
						   printf("INFO : OPERATION SUCCESSFULL\n");
								printf("Result : ");
								printf("%d\n",b*-1);
				}
				else if(str[0] == '-' && str1[0] != '-')
				{
				                str[0] = '0';
                                store_list(str,&head1,&tail1);
		                        store_list(str1,&head2,&tail2);
                                
				                 mul(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail,&Res_head1,&Res_tail1,&Res_head2,&Res_tail2);
								b = list_to_num(Res_head);
						   printf("INFO : OPERATION SUCCESSFULL\n");
								printf("Result : ");
								printf("%d\n",b*-1);
				}
				else if(str[0] != '-' && str1[0] != '-')
				{
                                store_list(str,&head1,&tail1);
		                        store_list(str1,&head2,&tail2);
                                
				                mul(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail,&Res_head1,&Res_tail1,&Res_head2,&Res_tail2);
								b = list_to_num(Res_head);
						   printf("INFO : OPERATION SUCCESSFULL\n");
								printf("Result : ");
								printf("%d\n",b);
				}
			        
		}
		else if(strcmp(argv[2],"/")== 0)
		{
			if(str[0] == '-' && str1[0] == '-')
			{
					str[0] ='0';
					str1[0] = '0';
					
					store_list(str,&head1,&tail1);
		            store_list(str1,&head2,&tail2);

                        
						 remove_zeros(&head2,&tail2);
						  remove_zeros(&head1,&tail1);
				        division(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
						b = list_to_num(Res_head);
					   printf("INFO : OPERATION SUCCESSFULL\n");
						printf("Result : ");
						printf("%d\n",b);

			}
			else if(str[0] != '-' && str1[0] == '-')
			{
				                str1[0] = '0';
                                store_list(str,&head1,&tail1);
		                        store_list(str1,&head2,&tail2);
                                
								 remove_zeros(&head2,&tail2);
				                 division(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
								b = list_to_num(Res_head);
						   printf("INFO : OPERATION SUCCESSFULL\n");
								printf("Result : ");
								printf("%d\n",b*-1);
			}
			else if(str[0] == '-' && str1[0] != '-')
			{
				                str[0] = '0';
                                store_list(str,&head1,&tail1);
		                        store_list(str1,&head2,&tail2);
    
				                 division(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
								b = list_to_num(Res_head);
						   printf("INFO : OPERATION SUCCESSFULL\n");
								printf("Result : ");
								printf("%d\n",b*-1);
			}
			else if(str[0] != '-' && str1[0] != '-')
			{
                                store_list(str,&head1,&tail1);
		                        store_list(str1,&head2,&tail2);
                                
				                division(&head1,&tail1,&head2,&tail2,&Res_head,&Res_tail);
								b = list_to_num(Res_head);
					   printf("INFO : OPERATION SUCCESSFULL\n");
								printf("Result : ");
								printf("%d\n",b);
			}
		}

}