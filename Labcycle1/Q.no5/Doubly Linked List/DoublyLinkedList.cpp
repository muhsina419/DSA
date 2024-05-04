// DoublyLinkedList.cpp

#include "DoublyLinkedList.h"
#include <iostream>
template < class T>
Node<T>::Node(int val) {
    this->data = val;
    next = NULL;
    prev = NULL;
}

template < class T>
int Node<T>::get_data() {
    return data;
}

template < class T>
void Node<T>::set_data(int val) {
    data = val;
}

template < class T>
Node<T>* Node<T>::get_next() {
    return next;
}

template < class T>
void Node<T>::set_next(Node* nxt) {
    next = nxt;
}

template < class T>
Node<T>* Node<T>::get_prev() {
    return prev;
}

template < class T>
void Node<T>::set_prev(Node* prv) {
    prev = prv;
}

template < class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = NULL;
}

template < class T>
void DoublyLinkedList<T>::insert_at_beginning(int data) {
    Node<T>* newNode = new Node<T> (data);
    if (!head) {
        head = newNode;
    } else {
        newNode->set_next(head);
        head->set_prev(newNode);
        head = newNode;
    }
}

template < class T>
void DoublyLinkedList<T>::insert_at_end(int data) {
    Node<T>* newNode = new Node <T> (data);
    if (!head) {
        head = newNode;
    } else {
        Node<T>* temp = head;
        while (temp->get_next() != NULL) {
            temp = temp->get_next();
        }
        temp->set_next(newNode);
        newNode->set_prev(temp);
    }
}

template < class T>
void DoublyLinkedList<T>::insert_at_position(int position, int data) {
    if (position == 1) {
        insert_at_beginning(data);
        return;
    }
    Node<T>* newNode = new Node<T>(data);
    Node<T>* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->get_next();
    }
    if (!temp) {
        std::cout << "Position out of range" << std::endl;
        return;
    }
    newNode->set_next(temp->get_next());
    if (temp->get_next() != NULL) {
        temp->get_next()->set_prev(newNode);
    }
    temp->set_next(newNode);
    newNode->set_prev(temp);
}

template < class T>
void DoublyLinkedList<T>::delete_from_beginning() {
    if (!head) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node<T>* temp = head;
    head = head->get_next();
    if (head != NULL) {
        head->set_prev(NULL);
    }
    delete temp;
}

template < class T>
void DoublyLinkedList<T>::delete_from_end() {
    if (!head) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node<T>* temp = head;
    while (temp->get_next() != NULL) {
        temp = temp->get_next();
    }
    if (temp->get_prev() != NULL) {
        temp->get_prev()->set_next(NULL);
    } else {
        head = NULL;
    }
    delete temp;
}

template < class T>
void DoublyLinkedList<T>::delete_from_position(int position) {
    if (position == 1) {
        delete_from_beginning();
        return;
    }
    Node<T>* temp = head;
    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->get_next();
    }
    if (!temp) {
        std::cout << "Position out of range" << std::endl;
        return;
    }
    if (temp->get_next() != NULL) {
        temp->get_next()->set_prev(temp->get_prev());
    }
    temp->get_prev()->set_next(temp->get_next());
    delete temp;
}

template < class T>
void DoublyLinkedList<T>::display() {
    Node<T>* temp = head;
    while (temp != NULL) {
        std::cout << temp->get_data() << " ";
        temp = temp->get_next();
    }
    std::cout << std::endl;
}

