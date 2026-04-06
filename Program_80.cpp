#include <iostream>
    using namespace std;
    struct Node80 {
        int data;
        Node80* next;
    };
    int main() {
        Node80* head = new Node80{80, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }