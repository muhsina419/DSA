#include "DequeUsingLL.h"
#include <iostream>



template<typename T>
Dequeue<T>::Dequeue() {
    front = rear = NULL;
}

template<typename T>
void Dequeue<T>::insertFront(T value) {
    Node<T>* newNode = new Node<T>();
    newNode->data = value;
    newNode->next = front;
    newNode->prev = NULL;
    if (front == NULL)
        rear = newNode;
    else
        front->prev = newNode;
    front = newNode;
}

template<typename T>
void Dequeue<T>::insertRear(T value) {
    Node<T>* newNode = new Node<T>();
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = rear;
    if (rear == NULL)
        front = newNode;
    else
        rear->next = newNode;
    rear = newNode;
}

template<typename T>
void Dequeue<T>::deleteFront() {
    if (front == NULL) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }
    Node<T>* temp = front;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    else
        front->prev = NULL;
    delete temp;
}

template<typename T>
void Dequeue<T>::deleteRear() {
    if (rear == NULL) {
        std::cout << "Queue is empty." << std::endl;
        return;
    }
    Node<T>* temp = rear;
    rear = rear->prev;
    if (rear == NULL)
        front = NULL;
    else
        rear->next = NULL;
    delete temp;
}

template<typename T>
void Dequeue<T>::display(std::ostream& out) {
    if (front == NULL) {
        out << "Queue is empty." << std::endl;
        return;
    }
    out << "Queue: ";
    Node<T>* current = front;
    while (current != NULL) {
        out << current->data << " ";
        current = current->next;
    }
    out << std::endl;
}

