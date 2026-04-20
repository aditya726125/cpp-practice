#include <iostream>
using namespace std;

class Inventory
{
    int size, capacity;
    int item[100]; // Fixed capacity array

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
            cout << "Full" << endl;
            return;
        }
        item[size++] = value;
    }

    void insertAt(int index, int value)
    {
        if (size >= capacity || index < 0 || index > size)
        {
            cout << "Invalid index or array is full" << endl;
            return;
        }
        // Shift elements to the right to make a "hole"
        for (int i = size; i > index; i--)
        {
            item[i] = item[i - 1];
        }
        item[index] = value;
        size++;
    }

    void remove(int index)
    {
        if (!isValidIndex(index))
        {
            cout << "Invalid index" << endl;
            return;
        }
        // Shift elements to the left to close the gap
        for (int i = index; i < size - 1; i++)
        {
            item[i] = item[i + 1];
        }
        size--;
    }

    void update(int index, int value)
    {
        if (!isValidIndex(index))
        {
            cout << "Invalid index" << endl;
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
        if (size == 0)
        {
            cout << "Inventory empty" << endl;
            return;
        }
        int max = item[0];
        for (int i = 1; i < size; i++)
        {
            if (item[i] > max)
            {
                max = item[i];
            }
        }
        cout << "Max: " << max << endl;
    }

    void findmin()
    {
        if (size == 0)
        {
            cout << "Inventory empty" << endl;
            return;
        }
        int min = item[0];
        for (int i = 1; i < size; i++)
        {
            if (item[i] < min)
            {
                min = item[i];
            }
        }
        cout << "Min: " << min << endl;
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
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << item[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Inventory inv;
    int ch, index, value;
    do
    {
        cout << "\n1. Insert\n2. Insert at index\n3. Remove\n4. Update\n5. Search\n6. Find Max\n7. Find Min\n8. Reverse\n9. Sort\n10. Display\n11. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Value: ";
            cin >> value;
            inv.insert(value);
            break;
        case 2:
            cout << "Index and Value: ";
            cin >> index >> value;
            inv.insertAt(index, value);
            break;
        case 3:
            cout << "Index: ";
            cin >> index;
            inv.remove(index);
            break;
        case 4:
            cout << "Index and Value: ";
            cin >> index >> value;
            inv.update(index, value);
            break;
        case 5:
            cout << "Value: ";
            cin >> value;
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
        case 10:
            inv.display();
            break;
        }
    } while (ch != 11);
    return 0;
}