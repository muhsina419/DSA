#include<iostream>
#define MAX_SIZE 10
using namespace std;

template<class T>
class Deque{
	private:
		int queue[MAX_SIZE];
		int front, rear;
		
	public:
		Deque();
		bool isEmpty();
		bool isFull();
		void enqueue_front(int);
		int dequeue_front();
		void enqueue_rear(int);
		int dequeue_rear();
		void display();
};
