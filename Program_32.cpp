#include <iostream>
    using namespace std;
    struct Node32 {
        int data;
        Node32* next;
    };
    int main() {
        Node32* head = new Node32{32, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }