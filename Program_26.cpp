#include <iostream>
    using namespace std;
    struct Node26 {
        int data;
        Node26* next;
    };
    int main() {
        Node26* head = new Node26{26, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }