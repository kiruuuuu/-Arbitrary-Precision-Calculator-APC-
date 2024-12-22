#ifndef DLL_H
#define DLL_L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2
#define DATA_NOT_FOUND -3

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}Dlist;

int add(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2,Dlist **Res_head1, Dlist **Res_tail1);
int sub(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2,Dlist **Res_head, Dlist **Res_tail);
int mul(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2,Dlist **Res_head, Dlist **Res_tail,Dlist **Res_head1, Dlist **Res_tail1 ,Dlist **Res_head2, Dlist **Res_tail2);
int division(Dlist **head1, Dlist **tail1,Dlist **head2, Dlist **tail2,Dlist **Res_head, Dlist **Res_tail);
int dl_insert_last(Dlist **head, Dlist **tail, int data);
int store_list(char *str,Dlist **head,Dlist **tail);
int dl_insert_first(Dlist **head, Dlist **tail, int data);
int dl_delete_list(Dlist **head, Dlist **tail);
void swap(Dlist **head,Dlist **tail);
void remove_zeros(Dlist **head,Dlist **tail);
int dl_delete_first(Dlist **head, Dlist **tail);
int dl_delete_last(Dlist **head, Dlist **tail);
void print_list(Dlist *head);
int get_count(Dlist **head);
int compare(Dlist *head1, Dlist *head2);
void delete_leading_zeroes(Dlist **head,Dlist **tail);
#endif