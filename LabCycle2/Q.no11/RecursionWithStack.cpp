#include "RecursionWithStack.h"
int factorialIterative(int n) {
    Stack<pair<int, int> > s; // Pair to store (n, result)
    s.push(make_pair(n, 1)); // Push initial state (n, 1)

    while (!s.empty()) {
        int currentN = s.top().first;
        int currentResult = s.top().second;
        s.pop();

        if (currentN == 0 || currentN == 1) {
            continue; // Skip further processing for n=0 or n=1
        } else {
            s.push(make_pair(currentN - 1, currentResult * currentN)); // Push (n-1, result*n)
        }
    }

    return s.empty() ? 1 : s.top().second; // Return result from the top of the stack
}

