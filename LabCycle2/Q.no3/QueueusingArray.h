#include <iostream>
#define MAX_SIZE 100
using namespace std;
template<class T>

class Queue {
	private:
		int queue[MAX_SIZE];
		int front, rear;
		
	public:
		Queue();
		bool isEmpty();
		bool isFull();
		void enqueue(int);
		int dequeue();
		void display();
		
};

