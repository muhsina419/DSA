#include "StackUsingLL.h"

Node :: Node(int value){
	data = value;
	link = NULL;
}

Stack :: Stack(){
	top = NULL;
}

bool Stack :: isEmpty(){
	return top == NULL;
}

void Stack :: push(int value){
	Node* newNode = new Node(value);
	newNode->link =top;
	top = newNode;
	cout<<"  pushed "<<value<<" onto the stack. "<<endl;
}

int Stack :: pop(){
	if(isEmpty()){
		cout<<"  Underflow! Cannot pop from an empty stack. "<<endl;
		return -1;
	}
	else{
		int poppedvalue = top->data;
		top = top->link;
		cout<<"  Popped "<<poppedvalue<<" from the stack "<<endl;
		return poppedvalue;
	}
}

void Stack :: display(){
	if(isEmpty()){
		cout<<"  Stack is Empty. "<<endl;
	}
	else{
		cout<<"  Elements in the Stack: ";
		Node* current = top;
		while(current != NULL){
			cout<<current->data<<" ";
			current = current->link;
		}
		cout<<endl;
	}
}

