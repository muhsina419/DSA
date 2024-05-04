#include"CircularDoublyLL.h"
using namespace std;
template<class T>
Node<T>::Node(T data) {
    this->data = data;
    next = NULL;
    prev = NULL;
}

template<class T>
CircularDoublyLinkedList<T>::CircularDoublyLinkedList() {
    head = NULL;
}

template<class T>
void CircularDoublyLinkedList<T>::insert_at_beginning(T data) {
    Node<T>* newNode = new Node<T>(data);
    if (!head) {
        head = newNode;
        head->next = head;
        head->prev = head;
    } else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        head = newNode;
    }
}

template<class T>
void CircularDoublyLinkedList<T>::insert_at_end(T data) {
    Node<T>* newNode = new Node<T>(data);
    if (!head) {
        head = newNode;
        head->next = head;
        head->prev = head;
    } else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
    }
}

template<class T>
void CircularDoublyLinkedList<T>::insert_at_position(int position, T data) {
    if (position == 1) {
        insert_at_beginning(data);
        return;
    }
    Node<T>* newNode = new Node<T>(data);
    Node<T>* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (!temp) {
        std::cout << "Position out of range" << std::endl;
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

template<class T>
void CircularDoublyLinkedList<T>::delete_from_beginning() {
    if (!head) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node<T>* temp = head;
    if (head->next == head) {
        head = NULL;
    } else {
        head->prev->next = head->next;
        head->next->prev = head->prev;
        head = head->next;
    }
    delete temp;
}

template<class T>
void CircularDoublyLinkedList<T>::delete_from_end() {
    if (!head) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node<T>* temp = head->prev;
    if (head->next == head) {
        head = NULL;
    } else {
        head->prev = temp->prev;
        temp->prev->next = head;
    }
    delete temp;
}

template<class T>
void CircularDoublyLinkedList<T>::delete_from_position(int position) {
    if (position == 1) {
        delete_from_beginning();
        return;
    }
    Node<T>* temp = head;
    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }
    if (!temp || temp == head) {
        std::cout << "Position out of range" << std::endl;
        return;
    }
    temp->prev->next = temp->next;
    if (temp->next) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

template<class T>
void CircularDoublyLinkedList<T>::display() {
    if (!head) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Node<T>* temp = head;
    do {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    std::cout << std::endl;
}
