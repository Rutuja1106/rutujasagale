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
    while (current != NULL) 
    {
        temp = current->next;
        current->next = prev ;
        prev = current; 
        current =temp;
    }

    head = prev ;
    /* Add code here */
    return head;
}

int main()
{
    node d= {'d', NULL}, a = {'a', &d}, b = {'b', &a}, c = {'c', &b};

    node* tmp = &c;

    /* c -> b -> a -> NULL */
    while(tmp)
    {
        printf("%c ", tmp->c);
        tmp = tmp->next;
    }
	
    printf("\n");

    node *head = &c;
    // catching the returned pointer which has reversed likedlist 
   node *root =  reverse_list(head);

    /* a -> b -> c -> NULL */
    while(root)
    {
        printf("%c ", root->c);
        root = root->next;
    }
    printf("\n exit \n");
}
