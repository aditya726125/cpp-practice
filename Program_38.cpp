#include <iostream>
    using namespace std;
    struct Node38 {
        int data;
        Node38* next;
    };
    int main() {
        Node38* head = new Node38{38, nullptr};
        cout << "Node contains: " << head->data << "\n";
        delete head;
        return 0;
    }