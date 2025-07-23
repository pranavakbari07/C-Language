#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int element)
    {
        this->data = element;
        this->next = NULL;
    }
};

class linklist
{
public:
    node *head = NULL;
    int count = 0;

    linklist()
    {
        this->head = NULL;
        this->count = 0;
    }

    void insertelementstart(int element)
    {
        node *newnode = new node(element);
        newnode->next = this->head;
        this->head = newnode;
        this->count++;
        cout << "Data inserted successfully!" << endl;
    }

    void insertelementend(int element)
    {
        node *newnode = new node(element);
        if (this->head == NULL)
        {
            this->head = newnode;  // Fixed assignment operator
        }
        else
        {
            node *ptr = this->head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
        this->count++;
        cout << "Element inserted at end successfully!" << endl;
    }

    void insertatposition(int element, int position)
    {
        if (position < 0 || position > count)
        {
            cout << "Invalid position! Position should be between 0 and " << count << endl;
            return;
        }

        node *newnode = new node(element);
        if (position == 0)
        {
            newnode->next = this->head;
            this->head = newnode;
        }
        else
        {
            node *ptr = this->head;
            for (int i = 0; i < position - 1; i++)
            {
                ptr = ptr->next;
            }
            newnode->next = ptr->next;
            ptr->next = newnode;
        }
        this->count++;
        cout << "Element inserted at position " << position << " successfully!" << endl;
    }

    void display()
    {
        if (this->head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        cout << "List contents: ";
        node *ptr = this->head;
        while (ptr != NULL)
        {
            cout << ptr->data;
            if (ptr->next != NULL)
                cout << " -> ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main()
{
    linklist list;
    int choice, element, position;

    do
    {
        cout << "\n=== Linked List Operations ===" << endl;
        cout << "1. Insert at start" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Insert at position" << endl;
        cout << "4. Display list" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> element;
            list.insertelementstart(element);
            break;
        case 2:
            cout << "Enter value to insert: ";
            cin >> element;
            list.insertelementend(element);
            break;
        case 3:
            cout << "Enter value to insert: ";
            cin >> element;
            cout << "Enter position (0-" << list.count << "): ";
            cin >> position;
            list.insertatposition(element, position);
            break;
        case 4:
            list.display();
            break;
        case 0:
            cout << "Exiting program!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}