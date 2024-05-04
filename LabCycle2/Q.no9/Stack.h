#include <iostream>
#include <stack>
using namespace std;

template<typename T>
class Stack {
private:
    stack<T> s;
public:
    void push(T val) {
        s.push(val);
    }

    T pop() {
        T val = s.top();
        s.pop();
        return val;
    }

    T top() {
        return s.top();
    }

    bool empty() {
        return s.empty();
    }
};

