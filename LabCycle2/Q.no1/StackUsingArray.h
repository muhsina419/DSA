#include<iostream>
#define MAX_SIZE 100
using namespace std;
template<class T>

class Stack{
	private:
		int top;
		int arr[MAX_SIZE];
		
	public:
		Stack();
		bool isEmpty();
		bool isFull();
		void push(T);
		int pop();
		int peek();
		void display();
};


