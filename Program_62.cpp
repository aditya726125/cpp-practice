#include <iostream>
    using namespace std;
    struct Node62 {
        int data;
        Node62* next;
    };
    int main() {
        Node62* head = new Node62{62, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }