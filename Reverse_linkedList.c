/*

Implement a function that reverses a single-linked list.

*/

#include <stdio.h>

typedef struct node
{
    char c;
    node *next;
} node;

node * reverse_list(node *head)
{
     node *temp = NULL ;
     node* prev = NULL;
     node* current = head;
	 // trvaerse through a linked list 
    while (current != NULL) 
    {
	   // store next address to reevrse the link list 
        temp = current->next;
		// creating reverse link list using prev pointer 
        current->next = prev ;
		// store current into rev 
        prev = current; 
		// restore temp
        current =temp;
    }

    head = prev ;
    /* Add code here */
    return head;
}

int main()
{
    node a = {'a', NULL}, b = {'b', &a}, c = {'c', &b};

    node* tmp = &c;

    /* c -> b -> a -> NULL */
    while(tmp)
    {
        printf("%c ", tmp->c);
        tmp = tmp->next;
    }
	
    printf("\n");

    node *head = &c;
   node *root =  reverse_list(head);

    /* a -> b -> c -> NULL */
    while(root)
    {
        printf("%c ", root->c);
        root = root->next;
    }
    printf("\n exit \n");
}
