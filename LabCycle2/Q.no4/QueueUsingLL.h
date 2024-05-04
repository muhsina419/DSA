#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* link;
		Node(int);
};

class Queue{
	private:
		Node* front;
		Node* rear;
		int capacity;
		int size;
	public:
		Queue(int);
		bool isEmpty();
		bool isFull();
		void enqueue(int);
		int dequeue();
		void display();			
};


