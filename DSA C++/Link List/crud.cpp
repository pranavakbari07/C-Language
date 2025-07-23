#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *link;
};

int main()
{

    node *head = NULL;

    head = new node();
    head->data = 25;
    head->link = NULL;

    node *current = NULL;

    current = new node();
    current->data = 45;
    current->link = NULL;

    head->link = current;

    current = new node();
    current->data = 98;
    current->link = NULL;

    head->link->link = current;

    node *ptr = NULL;

    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }

    return 0;
}