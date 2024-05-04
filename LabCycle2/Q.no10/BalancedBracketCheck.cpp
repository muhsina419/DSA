#ifndef BALANCED_BRACKET_CHECK_H
#define BALANCED_BRACKET_CHECK_H

#include <string>
#include "Stack.h"
using namespace std;

bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

bool isBalanced(string expression) {
    Stack<char> stack;

    for (string::iterator it = expression.begin(); it != expression.end(); ++it) {
    char bracket = *it;
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            stack.push(bracket);
        } else if (bracket == ')' || bracket == '}' || bracket == ']') {
            if (stack.empty() || !isMatchingPair(stack.top(), bracket)) {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty(); // Return true if the stack is empty
}

#endif

