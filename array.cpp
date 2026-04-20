// Array
#include <iostream>
using namespace std;
class Inventory
{
    int size, capacity;
    int item[100]; // Encapsulated array
    bool isValidIndex(int index)
    {
        return index >= 0 && index < size;
    }

public:
    Inventory(int cap = 100)
    {
        capacity = cap;
        size = 0;
    }
    void insert(int value)
    {
        if (size >= capacity)
        {
            cout << "Full";
            return;
        }
        item[size++] = value;
    }
    void insertAt(int index, int value)
    {
        if (size >= capacity || index < 0 || index > size)
        {
            cout << "Invalid index or array is full";
            return;
        }
        for (int i = size; i > index; i--)
        { // Find alternative to this loop
            item[i] = item[i - 1];
        }
        item[index] = value;
        size++;
    }
    void remove(int index)
    {
        if (!isValidIndex(index))
        {
            cout << "Invalid index";
            return;
        }
        for (int i = index; i < size; i++)
        {
            item[i] = item[i + 1];
        }
        size--;
    }
    void update(int index, int value)
    {
        if (!isValidIndex(index))
        {
            cout << "Invalid index";
            return;
        }
        item[index] = value;
    }
    void search(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (item[i] == value)
            {
                cout << "Item available at index: " << i << endl;
                return;
            }
        }
        cout << "Item not found" << endl;
    }
    void findmax()
    {
        int max = item[0];
        if (size == 0)
        {
            return;
        }
        max = item[i];
        for (int i = 1; i < size; i++)
        {
            if (item[i] > max)
            {
                max = item[i];
            }
        }
    }
    int min = item[0];
    if (size == 0)
    {
        return;
    }
    min = item[i];
    for (int i = 1; i < size; i++)
    {
        if (item[i] < min)
        {
            min = item[i];
        }
    }
    void reverse()
    {
        for (int i = 0; i < size / 2; i++)
        {
            int temp = item[i];
            item[i] = item[size - 1 - i];
            item[size - 1 - i] = temp;
        }
    }
    void sort()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (item[j] > item[j + 1])
                {
                    int temp = item[j];
                    item[j] = item[j + 1];
                    item[j + 1] = temp;
                }
            }
          }  }
    };
    int main(){
        Inventory inv;
        int ch , index , value;
        do{
            cout << "1. Insert\n2. Insert at index\n3. Remove\n4. Update\n5. Search\n6. Find Max\n7. Find Min\n8. Reverse\n9. Sort\n10. Exit\n";
            cout << "Enter your choice: ";
            cin>>ch;
            switch(ch){
                case 1:
                cout<<"Enter value to insert:";
                cin>>value;
                inv.insert(value);
                break;
                case 2:
                cout<<"Enter index and value to insert:";
                cin>>index>>value;
                inv.insertAt(index,value);
                break;
                case 3:
                cout<<"Enter index to remove:";
                cin>>index;
                inv.remove(index);
                break;
                case 4:
                cout<<"Enter index and new value to update:";
                cin>>index>>value;
                inv.update(index,value);
                break;
                case 5:
                cout<<"Enter value to search:";
                cin>>value;
                inv.search(value);
                break;
                case 6:
                inv.findmax();
                break;
                case 7:
                inv.findmin();
                break;
                case 8:
                inv.reverse();
                break;
                case 9:
                inv.sort();
                break;
            }
        }
        }
    }