#include <iostream>
    using namespace std;
    struct Node8 {
        int data;
        Node8* next;
    };
    int main() {
        Node8* head = new Node8{8, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }