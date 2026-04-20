// Linked list
#include <iostream>
using namespace std;
class PatientQueue
{
    struct Node
    {
        int patientId;
        Node *next;
    };
    Node *head;
    bool isEmpty()
    {
        return head == nullptr;
    }

public:
    PatientQueue()
    {
        head = nullptr;
    }
    void addEmg(int id)
    {
        Node *newNode = new Node{id, head};
        head = newNode;
        cout << "Emergency Patient Admitted";
    }
    void addReg(int id)
    {
        Node *newNode = new Node{id, nullptr};
        if (isEmpty())
        {
            head = newNode;
            cout << "Regular Patient Admitted";
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            cout << "Regular Patient Admitted";
        }
    }
    void insertAt(int id, int position)
    {
        if (position <= 0)
        {
            addEmg(id);
            return;
        }
        Node *temp = head;
        for (int i = 0; temp != nullptr && i < position - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == nullptr)
        {
            cout << "Invalid Position";
            return;
        }
        Node *nextNode = new Node{id, temp->next};
        temp->next = nextNode;
        cout << "Patient Admitted at Position " << position;
    }
    void Diefirst()
    {
        if (isEmpty())
        {
            cout << "No Patients in Queue";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "First Patient Died";
    }
   void Dielast()
{
    // 1. Check if the list is completely empty
    if (isEmpty())
    {
        cout << "No Patients in Queue\n";
        return;
    }
    
    // 2. Check if there is ONLY ONE patient
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        cout << "Last Patient Died\n";
        return;
    }
    
    // 3. For lists with 2 or more patients
    Node *temp = head;
    
    // Notice the extra '->next'! We stop when the node AFTER the next node is null.
    // This leaves 'temp' sitting exactly on the second-to-last node.
    while (temp->next->next != nullptr) 
    {
        temp = temp->next;
    }
    
    // Delete the actual last node
    delete temp->next; 
    
    // Cap off the new end of the list safely
    temp->next = nullptr; 
    
    cout << "Last Patient Died\n";
}
    void DieAt(int position)
    {
        if (isEmpty())
        {
            cout << "No Patients in Queue";
            return;
        }
        if (position == 0)
        {
            Diefirst();
            return;
        }
        Node *temp = head;
        for (int i = 0; temp->next != nullptr && i < position; i++)
        {
            temp = temp->next;
        }
        if (temp->next == nullptr)
        {
            cout << "Invalid Position";
            return;
        }
        Node *delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        cout << "Patient at Position " << position << " Died";
    }
    void Search(int id)
    {
        Node *temp = head;
        int position = 0;
        while (temp != nullptr)
        {
            if (id == temp->patientId)
            {
                cout << "Patient Found in Queue";
                return;
            }
            temp = temp->next;
            position++;
        }
        cout << "Patient Not Found in Queue";
    }
   void update(int id, int position)
{
    Node *temp = head;
    
    // 1. Walk down the list to find the exact position.
    // Do absolutely nothing else inside this loop!
    for (int i = 0; i < position && temp != nullptr; i++)
    {
        temp = temp->next;
    }
    
    // 2. Check if we fell off the edge of the list (invalid position)
    if (temp == nullptr)
    {
        cout << "Invalid Position\n";
        return;
    }
    
    // 3. Now that we are safely parked at the right node, update it ONCE.
    temp->patientId = id;
    cout << "Patient ID Updated at Position " << position << "\n";
}
    void reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void displayCount()
    {
        int c = 0;
        if (isEmpty())
        {
            cout << "No Patients in Queue" << c;
            return;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->patientId << " ";
            temp = temp->next;
            c++;
        }
        cout << "\nTotal Patients in Queue: " << c;
        cout << "Null";
    }
};
int main()
{
    PatientQueue pq;
    pq.addEmg(101);
    pq.addReg(102);
    pq.addReg(103);
    pq.insertAt(104, 1);
    pq.displayCount();
    pq.Search(102);
    pq.update(105, 2);
    pq.displayCount();
    pq.Diefirst();
    pq.Dielast();
    pq.DieAt(1);
    pq.displayCount();
    return 0;
}
