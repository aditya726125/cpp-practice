#include <iostream>

using namespace std;

struct Node {

    int data;

    Node* next;

    Node(int d) { data = d; next = nullptr; }

};

int main() {

    Node* head = new Node(10);

    head->next = new Node(20);

    Node* temp = head;

    while (temp != nullptr) {

        cout << temp->data << " ";

        temp = temp->next;

    }

    return 0;

}