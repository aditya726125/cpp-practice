#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int d) { data = d; next = nullptr; }
};
int getLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp) {
        count++;
        temp = temp->next;
    }
    return count;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    cout << getLength(head) << "\n";
    return 0;
}