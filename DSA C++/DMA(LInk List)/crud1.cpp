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
        cout << "Data inserted successfully !" << endl;
    }

    void insertelementend(int element)
    {
        node *newnode = new node(element);
        if (this->head == NULL)
        {
            this->head == newnode;
        }
        else
        {
            node *ptr = this->head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            this->count++;
            cout << "Element inserted at end successfully !" << endl;
        }
    }

    void insertatposition(int element, int position)
    {
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
            this->count++;
        }
        cout << "Element inserted at given position successfully!" << endl;
    }

    void printList()
    {
        node *ptr = this->head;
        cout << "Linked List: ";
        while (ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }

    void getallnode()
    {
        node *ptr = this->head;
        while (ptr != NULL)
        {
            cout << ptr->data << "<-";
            ptr = ptr->next;
        }
        cout << endl;
    }

    void updatenode(int element, int position)
    {
        node *ptr = this->head;
        for (int i = 1; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = element;
        cout << "Node update successfully ! " << endl;
    }

    void deleteFromStart()
    {
        if (this->head == NULL)
        {
            cout << "List is empty, nothing to delete!" << endl;
            return;
        }
        node *temp = this->head;
        this->head = this->head->next;
        delete temp;
        temp = NULL;
        this->count--;
        cout << "First node deleted successfully!" << endl;
    }

    void deleteFromEnd()
    {
        if (this->head == NULL)
        {
            cout << "List is empty, nothing to delete!" << endl;
            return;
        }
        if (this->head->next == NULL)
        {
            delete this->head;
            this->head = NULL;
        }
        else
        {
            node *ptr = this->head;
            while (ptr->next->next != NULL)
            {
                ptr = ptr->next;
            }
            delete ptr->next;
            ptr->next = NULL;
        }
        this->count--;
        cout << "Last node deleted successfully!" << endl;
    }
};

int main()
{
    linklist list;

    int choice, element, position;

    do
    {
        cout << "-----------------------------" << endl;
        cout << "Press 1 for add Insert Element Start " << endl;
        cout << "Press 2 for add ending element End " << endl;
        cout << "Press 3 for adding a node anywhere in the list" << endl;
        cout << "Press 4 for Print the list" << endl;
        cout << "Press 5 for updating node in the list" << endl;
        cout << "Press 6 to Delete from Start" << endl;
        cout << "Press 7 to Delete from End" << endl;
        cout << "Press 0 for exiting Program" << endl
             << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value of element : ";
            cin >> element;
            list.insertelementstart(element);
            break;
        case 2:
            cout << "Enter value of element : ";
            cin >> element;
            list.insertelementend(element);
            break;
        case 3:
            cout << "Enter value of element : ";
            cin >> element;
            cout << "Enter position for element : ";
            cin >> position;
            list.insertatposition(element, position);
            break;
        case 4:
            list.printList();
            break;
        case 5:
            cout << "Enter value of element : ";
            cin >> element;
            cout << "Enter Position : ";
            cin >> position;
            list.updatenode(element, position);
            break;
        case 6:
            list.deleteFromStart();
            break;
        case 7:
            list.deleteFromEnd();
            break;
        case 0:
            cout << "Exiting Program. Byy !" << endl;
            break;
        default:
            cout << "Invalid choice ! Try Again. " << endl;
            break;
        }
    } while (choice != 0);
}