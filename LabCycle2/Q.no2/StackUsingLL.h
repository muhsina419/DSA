#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* link;
		Node(int);
};
class Stack{
	private:
		Node* top;
	public:
		Stack();
		bool isEmpty();
		void push(int);
		int pop();
		void display();
};


