#include <iostream>
    using namespace std;
    struct Node {
        int data;
        Node* next;
    };
    int main() {
        Node* head = new Node{10, nullptr};
        Node* second = new Node{20, nullptr};
        head->next = second;
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
        delete head;
        delete second;
        return 0;
    }