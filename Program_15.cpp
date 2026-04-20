#include <iostream>

using namespace std;

struct Node {

    int data;

    Node* next;

    Node(int d) { data = d; next = nullptr; }

};

void insertAtTail(Node*& head, int data) {

    Node* newNode = new Node(data);

    if (!head) { head = newNode; return; }

    Node* temp = head;

    while (temp->next) temp = temp->next;

    temp->next = newNode;

}

int main() {

    Node* head = nullptr;

    insertAtTail(head, 10);

    insertAtTail(head, 20);

    Node* temp = head;

    while (temp) { cout << temp->data << " "; temp = temp->next; }

    return 0;

}