// Time Complexity:
// push()  -> O(1)
// pop()   -> O(1)
// peek()  -> O(1)
// isEmpty()-> O(1)
// Space Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack {
    // Please read sample.java file before starting.
    // Kindly include Time and Space complexity at top of each file
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    // Constructor}
    Stack() {
        top = -1;
    }

    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    // Check Stack Overflow
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow\n";
        return false;
    } else {
        a[++top] = x;
        return true;
    }
}

int Stack::pop()
{
    // Check Stack Underflow
    if (top < 0) {
        cout << "Stack Underflow\n";
        return 0;
    } else {
        return a[top--];
    }
}

int Stack::peek()
{
    // Check empty condition
    if (top < 0) {
        cout << "Stack is Empty\n";
        return 0;
    } else {
        return a[top];
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

// Driver program
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    return 0;
}
