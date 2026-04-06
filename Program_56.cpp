#include <iostream>
    using namespace std;
    struct Node56 {
        int data;
        Node56* next;
    };
    int main() {
        Node56* head = new Node56{56, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }