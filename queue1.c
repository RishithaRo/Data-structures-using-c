								//QUEUE
/*
A queue works on first in first out principle.

It has 2 variables front and rear.

front always stores the index of the first element of the queue

rear always stores the index of the element that is inserted at last.

front indicates where the queue started

rear indicates where the queue ended till then

if we have to store 5 elements in a queue, we store them from index 0 to 4.
means when size=5, front=0 and rear=4 if the queue of size 5 elements is full.
which means, to check if the queue is full, we check if(rear==size-1).
Intially, Both front and  rear are intialized to -1 when there are no elements.
so if front==-1 or rear==-1, we think that we can say it is empty.But,actually along with
above condition, we should also consider the following condition.

lets take a queue whose size is 5 but only 3 elements are fulled. 
so, last 2 indexes will not have any values. in this case, front = 0,rear=2,
0,1,2 index places are having elements.
suppose, if i deleted 0th indexed element, front will indicate 1st index, rear = 2
if i deleted 1st indexed element, front will indicate 2nd index, rear = 2
if i deleted 2nd indexed element, front will indicate 3rd index, rear = 2

now, rear = 2, front = 3 which indicates that still queue starts from 3rd indexed values.
But actually, there is no value and the queue is empty. so in this case, we check 
if(front==-1 || front>rear ), the list is empty.

front>rear , here rear itself indicated index of last element stored. 
front is first element's index.

*/

#include<stdio.h>
int queue[100];
int size=5;
int rear = -1;
int front = -1;
void enqueue(int data)
{
	if(rear==size-1)
	{
		printf("Stack overflow..\n");
		return;
	}
	else
	{
		if(front==-1)
		{
			front = 0;
		}
		queue[++rear]=data;
	}
}

void dequeue()
{
	if(front==-1||front>rear)
	{
		printf("Stack underflow..");
		return;
	}
	printf("Deleted element =>%d\n",queue[front]);
	front++;
}

void view()
{
	printf("Front element: %d\n",queue[front]);
	printf("Last element:%d\n",queue[rear]);
}

void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	dequeue();
	view();
	display();
}
