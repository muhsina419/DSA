#include "QueueUsingLL.h"

Node :: Node(int data){
	this->data=data;
	this->link=NULL;
}

Queue :: Queue(int capacity){
	this->front=NULL;
	this->rear=NULL;
	this->capacity=capacity;
	this->size=0;
}

bool Queue :: isEmpty(){
	return size==0;
}

bool Queue :: isFull(){
	return size==capacity;
}

void Queue :: enqueue (int value){
	if(isFull()){
		cout<<"  Queue Overflow!"<<endl;
		return;
	}
	Node* newnode = new Node(value);
	if(rear==NULL){
		front = newnode;
	}
	else{
		rear->link=newnode;
	}
	rear = newnode;
	size++;
}

int Queue :: dequeue(){
	if(isEmpty()){
		cout<<"  Queue Underflow! "<<endl;
		return -1;
	}
	int removedata=front->data;
	front = front->link;
	if(front==NULL){
		rear =NULL;
	}
	size--;
	return removedata;
}

void Queue :: display(){
	if(isEmpty()){
		cout<<"  Queue is empty."<<endl;
		return;
	}
	Node* current= front;
	while(current != NULL){
		cout<<current->data<<" ";
		current= current->link;
	}
	cout<<endl;
}


