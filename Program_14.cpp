#include <iostream>
    using namespace std;
    struct Node14 {
        int data;
        Node14* next;
    };
    int main() {
        Node14* head = new Node14{14, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }