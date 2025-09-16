#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtStart(Node* &head, int data) {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void displayLL(Node* &head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void insertAtEnd(Node* &head, Node* &tail, int data) {
    Node *newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    
}

int main() {
    Node *head = NULL;
    Node *tail = head;
    // insertAtStart(head, 10);
    // insertAtStart(head, 20);
    // insertAtStart(head, 30);

    // displayLL(head);

    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);

    displayLL(head);
}