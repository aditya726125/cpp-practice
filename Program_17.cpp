#include <iostream>

using namespace std;

struct Node {

    int data;

    Node* next;

    Node(int d) { data = d; next = nullptr; }

};

Node* reverseList(Node* head) {

    Node *prev = nullptr, *current = head, *next = nullptr;

    while (current) {

        next = current->next;

        current->next = prev;

        prev = current;

        current = next;

    }

    return prev;

}

int main() {

    Node* head = new Node(1);

    head->next = new Node(2);

    head->next->next = new Node(3);

    head = reverseList(head);

    Node* temp = head;

    while (temp) { cout << temp->data << " "; temp = temp->next; }

    return 0;

}