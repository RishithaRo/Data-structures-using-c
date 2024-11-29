//write a program to create a linked list of n numbers,and print the largest number of the list

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

void largest(struct Node *head)
{
	struct Node *temp = head;
	int max = temp->data;
	while(temp!=NULL)
	{
		if(temp->data>max)
		{
			max = temp->data;
		}
		temp = temp->next;
	}
	printf("largest element of list :: %d",max);
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
	largest(head);
}
