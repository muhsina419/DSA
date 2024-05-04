#include<iostream>
using namespace std;
template<class T>
class Node{
	int data;
	Node* link;
	
	public:
		Node(int);
		int get_data();
		void set_data(int);
		void set_link(Node*);
		Node* get_link();
};

template<class T>
class LinkedList{
	Node<T>* head;
	
	public:
		LinkedList();
		void insert_at_beginning(int);
		void insert_at_end(int);
		void insert_at_position(int,int);
		void delete_from_beginning();
		void delete_from_end();
		void delete_from_specified_position(int);
		void display();
};
