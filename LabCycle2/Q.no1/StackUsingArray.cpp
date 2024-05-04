#include "StackUsingArray.h"

template <class T> Stack<T> :: Stack(){
	top = -1;
}
template <class T> bool Stack<T> :: isEmpty(){
	return top==-1;
}
template <class T> bool Stack<T> :: isFull(){
	return top==MAX_SIZE-1;
}
template <class T> void Stack<T> :: push(T value){
	if(isFull()){
		cout<<"  Stack overflow! cannot push item "<<endl;
	}
	else{
		arr[++top] = value;
		cout<<"  Pushed "<< value <<" onto the stack "<<endl;
	}
}
template <class T> int Stack<T> :: pop(){
	if(isEmpty()){
		cout<<"  Stack underflow! cannot pop from an empty stack "<<endl;
		return -1;
	}
	else{
		cout<<"  Popped " <<arr[top]<<" from the stack "<<endl;
		return arr[top--];
	}
}
template <class T> int Stack<T> :: peek(){
	if(isEmpty()){
		cout<<"  Stack is empty. Cannot peek. "<<endl;
		return -1;
	}
	else{
		return arr[top];
	}
}
template <class T> void Stack<T> :: display(){
	if(isEmpty()){
		cout<<"  Stack is empty. "<<endl; 
	}
	else{
		cout<<"  Elements in the stack : ";
		for(int i= top; i>=0; i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}

