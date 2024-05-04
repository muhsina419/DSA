#include <iostream>
#include<ostream>
using namespace std;
template<typename T>
struct Node {
    T data;
    Node* next;
    Node* prev;
};

template<typename T>
class Dequeue {
private:
    Node<T>* front;
    Node<T>* rear;

public:
    Dequeue();

    void insertFront(T value);
    void insertRear(T value);
    void deleteFront();
    void deleteRear();
    void display(ostream& out);
};
