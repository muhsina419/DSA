#include "QueueusingArray.h"

template<class T> Queue <T>::Queue(){
	front = 0;
	rear = -1;
}

template<class T> bool Queue <T> :: isEmpty(){
	return (front ==rear+1);
}

template<class T> bool Queue <T> :: isFull(){
	return rear-front==MAX_SIZE;
}

template<class T> void Queue <T>:: enqueue(int value){
	if(isFull()){
		cout<<"  Queue Overflow!\n";
		return;
	}
	else{
		rear=(rear+1)%MAX_SIZE;
		queue[rear]=value;
	}
}

template <class T> int Queue <T> :: dequeue(){
	if(isEmpty()){
		cout<<"  Queue Underflow! \n";
		return -1;
	}
	int item = queue[front];
	if(front == rear){
		front=0;
		rear=-1;
	}
	else{
		front = (front+1)%MAX_SIZE;
	}
	return item;
}

template <class T> void Queue <T> :: display(){
	if(isEmpty()){
		cout<<"  Queue is empty.\n";
		return;
	}
	int i=front;
	while(i != rear) {
		cout<<queue[i]<<" ";
		i=(i+1)%MAX_SIZE;
	}
	cout<<queue[rear]<<endl;
}


