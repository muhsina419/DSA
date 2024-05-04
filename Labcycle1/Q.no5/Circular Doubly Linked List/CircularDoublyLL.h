#include<iostream>
using namespace std;
template<class T>
class Node {
public:
    T data;
    Node* next;
    Node* prev;

    Node(T data);
};

template<class T>
class CircularDoublyLinkedList {
private:
    Node<T>* head;

public:
    CircularDoublyLinkedList();
    void insert_at_beginning(T data);
    void insert_at_end(T data);
    void insert_at_position(int position, T data);
    void delete_from_beginning();
    void delete_from_end();
    void delete_from_position(int position);
    void display();
};
