#include <iostream>
    using namespace std;
    struct Node74 {
        int data;
        Node74* next;
    };
    int main() {
        Node74* head = new Node74{74, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }