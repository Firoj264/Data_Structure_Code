#include <stdio.h>
#include <stdlib.h>

/* List Structure */
typedef struct Node
{
    int data;
    struct Node *link;
} node;

int NoOfNodes=0;		// Count number of node

node *head=NULL;		// Head node to keep track of list

/* Driver Functions */
void Push(int data);
int Pop();
void PrintStack(node *);


/* Insert Element */
void Push(int data)
{
    // Declaring node
    NoOfNodes++;
    node *temp = (node*)calloc(1,sizeof(node));
    temp->data = data;
    temp->link = NULL;

    // If head is NULL or first node
    if(!head)
    {
        head = temp;
        return;
    }

    // Traverse list upto end
    node *traverse=head;
    while(traverse->link)
        traverse = traverse->link;

    traverse->link = temp;
}

/* Delete Element */
int Pop()
{
    node *traverse = head;
    int i;
    for( i=0; i<NoOfNodes-2; i++)
        traverse = traverse->link;

    node *Delete = traverse->link;
    traverse->link = NULL;
    int data = Delete->data;
    free(Delete);
    NoOfNodes--;

    return data;
}

/* Print Stack */
void PrintStack(node *p)
{
    printf(" %d",p->data);
    if(!p->link)return;
    PrintStack(p->link);
    printf("\n");
}
/* Main Method */
int main()
{
    printf("\nStack elements are - \n");
    Push(0);
    Push(1);
    Push(2);
    Push(3);
    PrintStack(head);
    printf("After two time pop\n");
    Pop(); 		// Delete 3 from Stack
    Pop(); 		// Delete 2 from Stack

    PrintStack(head); // Print Stack data

    return 0;
}
