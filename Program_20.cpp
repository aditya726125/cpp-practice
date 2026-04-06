#include <iostream>
    using namespace std;
    struct Node20 {
        int data;
        Node20* next;
    };
    int main() {
        Node20* head = new Node20{20, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }