#include <iostream>
#include "PostfixEvaluation.cpp"
using namespace std;

int main() {
    string postfixExpression;
    cout << "Enter postfix expression: ";
    cin >> postfixExpression;

    int result = evaluatePostfix(postfixExpression);
    cout << "Result: " << result << endl;

    return 0;
}

