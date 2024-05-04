#include "LinkedList.h"
#include <iostream>
template <class T >
Node<T>::Node(int data) {
    this->data = data;
    this->link = NULL;
}

template <class T >
int Node<T>::get_data() {
    return data;
}

template <class T >
void Node<T>::set_link(Node* link) {
    this->link = link;
}

template <class T >
void Node<T>::set_data(int data) {
    this->data = data;
}

template <class T >
Node<T>* Node<T>::get_link() {
    return link;
}

template <class T >
LinkedList<T>::LinkedList() {
    head = NULL;
}

template <class T >
void LinkedList<T>::display() {
    Node<T>* p = head;
    while (p != NULL ) {
        std::cout << p->get_data() << std::endl;
        p = p->get_link();
    }
}

template <class T >
void LinkedList<T>::insert_at_beginning(int key) {
    Node<T>* node = new Node<T>(key);
    node->set_data(key);
    node->set_link(head);
    head = node;
}

template <class T >
void LinkedList<T>::insert_at_end(int key) {
    Node<T>* node = new Node<T>(key);
    if (head == NULL ) {
        head = node;
        return;
    }
    Node<T>* p = head;
    while (p->get_link() != NULL ) {
        p = p->get_link();
    }
    p->set_link(node);
}

template <class T >
void LinkedList<T>::insert_at_position(int key, int position) {
    if (position <= 0) {
        std::cout << "Invalid Position." << std::endl;
        return;
    }
    if (position == 1 || head == NULL ) {
        insert_at_beginning(key);
        return;
    }
    Node<T>* node = new Node<T>(key);
    Node<T>* p = head;
    int count = 1;
    while (count < position - 1 && p != NULL ) {
        p = p->get_link();
        count++;
    }
    if (p == NULL) {
        std::cout << "Position out of range." << std::endl;
        return;
    }
    node->set_link(p->get_link());
    node->set_data(key);
    p->set_link(node);
}

template <class T >
void LinkedList<T>::delete_from_beginning() {
    if (head == NULL) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node<T>* p = head;
    head = head->get_link();
    delete p;
}

template <class T >
void LinkedList<T>::delete_from_end() {
    if (head == NULL) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    if (head->get_link() == NULL ) {
        delete head;
        head = NULL;
        return;
    }
    Node<T>* p = head;
    Node<T>* q = NULL;
    while (p->get_link() != NULL) {
        q = p;
        p = p->get_link();
    }
    delete p;
    q->set_link(NULL);
}

template <class T >
void LinkedList<T>::delete_from_specified_position(int position) {
    if (head == NULL) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    if (position <= 0) {
        std::cout << "Invalid Position." << std::endl;
        return;
    }
    if (position == 1) {
        delete_from_beginning();
        return;
    }
    Node<T>* p = head;
    Node<T>* q = NULL;
    int count = 1;
    while (count < position && p != NULL) {
        q = p;
        p = p->get_link();
        count++;
    }
    if (p == NULL) {
        std::cout << "Position out of range." << std::endl;
        return;
    }
    q->set_link(p->get_link());
    delete p;
}

