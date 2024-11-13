/* write a program to accept create a linked list of n numbers , accept an element from user,
if the accepted element is present in the list, print yes other wise no
*/
/*
i/p:--
5
5 3 7 2 1
7 
o/p:--
Yes
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *createNode(int data)
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertAtEnd(struct Node **head,int data)
{
	struct Node *newnode = createNode(data);
	if(*head==NULL)
	{
		*head = newnode;
		return;
	}
	struct Node *temp = *head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	//newnode->next=temp->next; last node cannot contain any adress, it should be null
	temp->next = newnode;
}

void displayList(struct Node *head)
{
	struct Node *temp = head;
	while(temp!=NULL)
	{
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

//To check if an element is present in the list or not.
void check(struct Node *head,int data)
{
    struct Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        if(temp->data == data)
        {
           // printf("Yes");
           count++;
        }
        temp = temp->next;
    }
    if(count)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
int main()
{
	struct Node *head = NULL;
	printf("Enter no.of elements to be inserted::");
	int a,b;
	scanf("%d",&a);
	int i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b);
		insertAtEnd(&head,b);
	}
	//displayList(head);
	int num;
	printf("Enter number to be checked::");
	scanf("%d",&num);
	check(head,num);
}
//method 2
// Instead of check function of above program, we can use below check function
//To check if an element is present in the list or not.
void check(struct Node *head,int data)
{
    struct Node *temp = head;
    while(temp!=NULL)
    {
    	if(temp->data == data)
    	{
    		printf("Yes");
    		break;
		}
		temp = temp->next;
	}
	if(temp==NULL)
	{
		printf("No");
	}
}
