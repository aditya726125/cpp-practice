#include <iostream>

using namespace std;

struct Node {

    int data;

    Node* next;

    Node(int d) { data = d; next = nullptr; }

};

void insertAtHead(Node*& head, int data) {

    Node* newNode = new Node(data);

    newNode->next = head;

    head = newNode;

}

int main() {

    Node* head = nullptr;

    insertAtHead(head, 30);

    insertAtHead(head, 20);

    insertAtHead(head, 10);

    Node* temp = head;

    while (temp != nullptr) {

        cout << temp->data << " ";

        temp = temp->next;

    }

    return 0;

}