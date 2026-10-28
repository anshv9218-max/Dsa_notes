#include <bits/stdc++.h>
using namespace std;

class MyStack {
private:
    int top;
    int *arr;
    int size;

public:
    // Constructor
    MyStack(int capacity) {
        top = -1;
        size = capacity;
        arr = new int[size];
    }

    // Check if stack is full
    bool isFull() {
        return top == size - 1;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Push
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++top] = x;
        cout << x << " pushed into stack" << endl;
    }

    // Pop
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << arr[top--] << " popped from stack" << endl;
    }

    // Peek
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << arr[top] << " is at the top of stack" << endl;
    }
};

int main() {

    int size;

    cout << "Enter the size of stack: ";
    cin >> size;

    MyStack s(size);

    s.push(1);
    s.push(2);
    s.push(3);
    s.peek();

    s.pop();

    s.peek();

    return 0;
}