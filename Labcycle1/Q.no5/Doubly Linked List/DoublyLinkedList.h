#include<iostream>
using namespace std;
template<class T>
class Node{
	public:
		int data;
		Node* next;
		Node* prev;
	
	public:
		Node(int data);
		int get_data();
		void set_data(int);
		void set_next(Node*);
		Node* get_next();
		void set_prev(Node*);
		Node* get_prev();
		
};

template<class T>
class DoublyLinkedList {
	private:
		Node<T>* head;
		
	public:
		DoublyLinkedList();
		void insert_at_beginning(int );
		void insert_at_end(int );
		void insert_at_position(int , int );
		void delete_from_beginning();
		void delete_from_end();
		void delete_from_position(int);
		void display();
		
};
