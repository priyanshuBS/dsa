#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class Stack {
    Node *top;
    public:
    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return (top == nullptr);
    }

    void push(int val) {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = top;
        top = newNode;
        cout << val << " pushed into stack" << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node *temp = top;
        cout << temp->data << " poped out of stack!\n";
        top = top->next;
        temp->next = nullptr;
        delete temp;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
        } else {
            cout << top->data << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node *temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(56);
    s.pop();
    s.peek();
    s.display();
}