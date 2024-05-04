#include "TwoWayStack.h"
#include <iostream>
using namespace std;

template<typename T>
TwoWayStack<T>::TwoWayStack(int size) {
    capacity = size;
    arr = new T[capacity];
    top1 = -1;
    top2 = capacity;
}

template<typename T>
TwoWayStack<T>::~TwoWayStack() {
    delete[] arr;
}

template<typename T>
void TwoWayStack<T>::push1(T val) {
    if (top1 < top2 - 1) {
        arr[++top1] = val;
    } else {
        cout << "Stack 1 Overflow\n";
    }
}

template<typename T>
void TwoWayStack<T>::push2(T val) {
    if (top1 < top2 - 1) {
        arr[--top2] = val;
    } else {
        cout << "Stack 2 Overflow\n";
    }
}

template<typename T>
T TwoWayStack<T>::pop1() {
    if (top1 >= 0) {
        T val = arr[top1--];
        return val;
    } else {
        cout << "Stack 1 Underflow\n";
        return T();
    }
}

template<typename T>
T TwoWayStack<T>::pop2() {
    if (top2 < capacity) {
        T val = arr[top2++];
        return val;
    } else {
        cout << "Stack 2 Underflow\n";
        return T();
    }
}

template<typename T>
bool TwoWayStack<T>::isEmpty1() {
    return top1 == -1;
}

template<typename T>
bool TwoWayStack<T>::isEmpty2() {
    return top2 == capacity;
}

