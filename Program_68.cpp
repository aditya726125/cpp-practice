#include <iostream>
    using namespace std;
    struct Node68 {
        int data;
        Node68* next;
    };
    int main() {
        Node68* head = new Node68{68, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }