#include <iostream>
    using namespace std;
    struct Node50 {
        int data;
        Node50* next;
    };
    int main() {
        Node50* head = new Node50{50, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }