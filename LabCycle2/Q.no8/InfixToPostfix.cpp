#include <string>
#include <stack>
#include "InfixToPostFix.h"
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

string infixToPostfix(string expression) {
    Stack<char> stack;
    string result = "";

    for (string::iterator it = expression.begin(); it != expression.end(); ++it) {
    char c = *it;
        if (isalnum(c)) {
            result += c;
        } else if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            while (!stack.empty() && stack.top() != '(') {
                result += stack.pop();
            }
            stack.pop();
        } else {
            while (!stack.empty() && precedence(c) <= precedence(stack.top())) {
                result += stack.pop();
            }
            stack.push(c);
        }
    }

    while (!stack.empty()) {
        result += stack.pop();
    }

    return result;
}

string infixToPrefix(string expression) {
    reverse(expression.begin(), expression.end());
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(') {
            expression[i] = ')';
            i++;
        } else if (expression[i] == ')') {
            expression[i] = '(';
            i++;
        }
    }
    string postfix = infixToPostfix(expression);
    reverse(postfix.begin(), postfix.end());
    return postfix;
}

