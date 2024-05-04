#include "DequeUsingArray.h"

template<class T> Deque<T> :: Deque(){
	front=0;
	rear=-1;
}

template<class T> bool Deque <T> :: isEmpty(){
	return (front ==rear+1);
}

template<class T> bool Deque <T> :: isFull(){
	return rear-front==MAX_SIZE;
}

template<class T> void Deque <T>:: enqueue_rear(int value){
	if(isFull()){
		cout<<"  Queue Overflow!\n";
		return;
	}
	else{
		rear=(rear+1)%MAX_SIZE;
		queue[rear]=value;
	}
}

template<class T> void Deque <T>:: enqueue_front(int value){
	if(isFull()){
		cout<<"  Queue Overflow!\n";
		return;
	}
	else{
		front=(front-1)%MAX_SIZE;
		queue[front]=value;
	}
}

template <class T> int Deque <T> :: dequeue_front(){
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

template <class T> int Deque <T> :: dequeue_rear(){
	if(isEmpty()){
		cout<<"  Queue Underflow! \n";
		return -1;
	}
	int item = queue[rear];
	if(front == rear){
		front=0;
		rear=-1;
	}
	else{
		rear = (rear-1)%MAX_SIZE;
	}
	return item;
}

template <class T> void Deque <T> :: display(){
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
