#include <iostream>
#include "BalancedBracketCheck.cpp"
using namespace std;

int main() {
    string expression;
    cout << "Enter bracket expression: ";
    getline(cin, expression);

    if (isBalanced(expression)) {
        cout << "The bracket expression is balanced." << endl;
    } else {
        cout << "The bracket expression is not balanced." << endl;
    }

    return 0;
}

