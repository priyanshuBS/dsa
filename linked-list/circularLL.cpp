#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class CircularLL {
    private:
        Node *last;

    public:
        CircularLL() {
            last = nullptr;
        }

        void insertAtEnd(int value) {
            Node *newNode = new Node();
            newNode->data = value;

            if (last == nullptr) {
                newNode->next = newNode;
                last = newNode;
            } else {
                newNode->next = last->next;
                last->next = newNode;
                last = newNode;
            }
        }

        void insertAtBegin(int value) {
            Node *newNode = new Node();
            newNode->data = value;

            if (last == nullptr) {
                newNode->next = newNode;
                last = newNode;
            } else {
                newNode->next = last->next;
                last->next = newNode;
            }
        }

        void insertAt(int pos, int val) {
            if (pos <= 0) {
                cout << "Invalid position.\n";
                return;
            }
            Node *newNode = new Node();
            newNode->data = val;
            if (last == nullptr) {
                if (pos == 1) {
                    newNode->next = newNode;
                    last = newNode;
                } else {
                    cout << "Invalid position (list is empty)\n";
                    return;
                }
                return;
            }

            if (pos == 1) {
                newNode->next = last->next;
                last->next = newNode;
                return;
            }
            Node *temp = last->next;
            for (int i=1; i<pos-1 && temp != last; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;

            if (temp == last) {
                last = newNode;
            }
        }

        void deleteValue(int value) {
            if (last == nullptr) {
                cout << "list is empty\n";
                return;
            }
            Node *curr = last->next;
            Node *prev = last;

            do {
                if (curr->data == value) {
                    
                }
            } while (curr != curr->next);
        }
};