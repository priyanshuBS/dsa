#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtStart(Node *&head, Node *&tail, int data) {
    Node *newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int data) {
    if (pos == 1) {
        insertAtStart(head, tail, data);
        return;
    }

    Node *newNode = new Node(data);
    int cnt = 1;
    Node *temp = head;
    while (cnt < pos-1) {
        cnt++;
        temp = temp->next;
    }
    if (temp == nullptr) return;
    if (temp->next == nullptr) {
        temp->next = newNode;
        tail = newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtEnd(Node *&tail, Node *&head, int data) {
    if (head == nullptr) {
        insertAtStart(head, tail, data);
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void deleteAtFirst(Node *&head, Node *&tail) {
    if (head == nullptr) {
        return;
    }
    Node *temp = head;
    if (temp->next == nullptr) {
        head = nullptr;
        tail = nullptr;
        delete temp;
        return;
    }
    head = temp->next;
    delete temp;
}

void deleteAtPosition(Node *&head, Node *&tail, int pos) {
    if (pos == 1) {
        deleteAtFirst(head, tail);
        return;
    }
    Node *prev = nullptr;
    Node *curr = head;
    int cnt = 1;
    while (cnt < pos && curr != nullptr) {
        cnt++;
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr) return;
    if (curr->next == nullptr) {
        tail = prev;
    }
    prev->next = curr->next;
    delete curr;
}

void displayNode(Node *&head) {
    Node *temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = nullptr;
    Node *tail = nullptr;
    insertAtStart(head, tail, 56);
    insertAtStart(head, tail, 34);
    insertAtStart(head, tail, 79);
    displayNode(head);
    deleteAtFirst(head, tail);
    displayNode(head);

}