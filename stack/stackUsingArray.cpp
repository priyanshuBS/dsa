#include <iostream>
using namespace std;

#define MAX 5

class Stack {
    int arr[MAX];
    int top;

    public:
        Stack() {
            top = -1;
        }

        bool isEmpty() {
            return (top == -1);
        }

        bool isFull() {
            return (top == MAX - 1);
        }

        void push(int val) {
            if (isFull()) {
                cout << "Stack overflow! Cannot push" << endl;
                return;
            }
            arr[++top] = val;
            cout << val << " pushed into stack!" << endl;
        }

        void pop() {
            if (isEmpty()) {
                cout << "Stack undeflow! Cannot pop\n";
                return;
            }
            cout << arr[top--] << " pop out from stack\n";
        }

        void peek() {
            if (isEmpty()) {
                cout << "Stack is empty!\n";
                return;
            }
            cout << arr[top] << endl;
        }

        void display() {
            if (isEmpty()) {
                cout << "stac is empty\n";
                return;
            }
            for (int i=top; i>=0; --i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Stack s;

    s.push(67);
    s.peek();
    s.display();
}