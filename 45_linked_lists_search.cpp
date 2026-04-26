#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int d) { data = d; next = nullptr; }
};
bool searchList(Node* head, int key) {
    Node* temp = head;
    while (temp) {
        if (temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}
int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    cout << searchList(head, 20) << "\n";
    cout << searchList(head, 50) << "\n";
    return 0;
}