#include <string>
#include <cctype>
#include "Stack.h"
using namespace std;

int evaluatePostfix(string expression) {
    Stack<int> stack;

    for (string::iterator it = expression.begin(); it != expression.end(); ++it) {
    char c = *it;
        if (isdigit(c)) {
            stack.push(c - '0');
        } else {
            int operand2 = stack.pop();
            int operand1 = stack.pop();
            switch (c) {
                case '+':
                    stack.push(operand1 + operand2);
                    break;
                case '-':
                    stack.push(operand1 - operand2);
                    break;
                case '*':
                    stack.push(operand1 * operand2);
                    break;
                case '/':
                    stack.push(operand1 / operand2);
                    break;
            }
        }
    }

    return stack.pop();
}

