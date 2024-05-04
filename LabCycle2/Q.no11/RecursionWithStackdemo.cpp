#include <iostream>
#include "RecursionWithStack.cpp"
using namespace std;

int main() {
    int n;
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;

    // Calculate factorial using iteration with a stack
    cout << "Factorial using iteration with a stack: " << factorialIterative(n) << endl;

    return 0;
}

