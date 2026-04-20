#include <iostream>

using namespace std;

struct Node {

    int data;

    Node* next;

    Node(int d) { data = d; next = nullptr; }

};

void deleteNode(Node*& head, int key) {

    if (!head) return;

    if (head->data == key) {

        Node* toDelete = head;

        head = head->next;

        delete toDelete;

        return;

    }

    Node* temp = head;

    while (temp->next && temp->next->data != key) temp = temp->next;

    if (temp->next) {

        Node* toDelete = temp->next;

        temp->next = temp->next->next;

        delete toDelete;

    }

}

int main() {

    Node* head = new Node(10);

    head->next = new Node(20);

    head->next->next = new Node(30);

    deleteNode(head, 20);

    Node* temp = head;

    while (temp) { cout << temp->data << " "; temp = temp->next; }

    return 0;

}