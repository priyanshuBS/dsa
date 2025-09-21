#include <iostream>
using namespace std;

class Node {
    public:
        Node *prev;
        int data;
        Node *next;
    
    Node(int data) {
        this->prev = nullptr;
        this->data = data;
        this->next = nullptr;
    }
};

void getLength(Node *head) {
    int cnt = 0;
    while (head != nullptr) {
        cnt++;
        head = head->next;
    }
    cout << cnt << endl;
}

void displayList(Node *head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtFirst(Node *&head, Node *&tail, int data) {
    Node *newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtLast(Node *&head, Node *&tail, int data) {
    if (head == nullptr && tail == nullptr) {
        insertAtFirst(head, tail, data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void insertAtAnyPosition(Node *&head, Node *&tail, int pos, int data) {
    if (pos == 1) {
        insertAtFirst(head, tail, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos-1) {
        cnt++;
        temp = temp->next;
    }
    if (temp == nullptr) return;
    if (temp->next == nullptr) {
        insertAtLast(head, tail, data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteAtFirst(Node *&head, Node *&tail) {
    Node *temp = head;
    if (temp->next == nullptr) {
        head = nullptr;
        tail = nullptr;
        delete temp;
        return;
    }
    temp->next->prev = nullptr;
    head = temp->next;
    delete temp;
}

void deleteAtLast(Node *&head, Node *&tail) {
    if (tail == nullptr) return;

    if (tail->prev == nullptr) {
        head = nullptr;
        tail = nullptr;
        return;
    }
    Node *curr = tail;
    tail->prev->next = nullptr;
    tail = tail->prev;
    delete curr;
}

void deleteAtAnyPosition(Node *&head, Node *&tail, int pos) {
    if (pos == 1) {
        deleteAtFirst(head, tail);
        return;
    }
    Node *prev = nullptr;
    Node *curr = head;
    int cnt = 1;
    while (cnt < pos) {
        cnt++;
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr) return;

    if (curr->next == nullptr) {
        deleteAtLast(head, tail);
        return;
    }

    prev->next = curr->next;
    curr->next->prev = curr->prev;
    delete curr;
}

int main() {
    Node *head = nullptr;
    Node *tail = nullptr;
    insertAtFirst(head, tail, 24);
    insertAtLast(head, tail, 56);
    insertAtAnyPosition(head, tail, 2, 45);
    deleteAtLast(head, tail);
    deleteAtFirst(head, tail);
    insertAtLast(head, tail, 69);
    deleteAtAnyPosition(head, tail, 2);
    getLength(head);
    displayList(head);
}