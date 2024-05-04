#include <iostream>
using namespace std;
template<typename T>
class TwoWayStack {
private:
    T* arr;
    int capacity;
    int top1;
    int top2;
public:
    TwoWayStack(int size);
    ~TwoWayStack();
    void push1(T val);
    void push2(T val);
    T pop1();
    T pop2();
    bool isEmpty1();
    bool isEmpty2();
};

