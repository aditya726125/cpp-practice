#include <iostream>
    using namespace std;
    struct Node44 {
        int data;
        Node44* next;
    };
    int main() {
        Node44* head = new Node44{44, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }