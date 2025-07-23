#include <iostream>
using namespace std;
 
class node
{
public:
    int data;
    node *next;
};

int main()
{

    node *head1 = NULL;

    head1 = new node();
    head1->data = 25;
    head1->next = NULL;

    node *head2 = NULL;

    head2 = new node();
    head2->data = 45;
    head2->next = NULL;

    head1->next = head2;

    node *head3 = NULL;

    head3 = new node();
    head3->data = 98;
    head3->next = NULL;

    head2->next = head3;

    node *head4 = NULL;

    head4 = new node();
    head4->data = 85;
    head4->next = NULL;

    head3->next = head4;

    node *head5 = NULL;

    head5 = new node();
    head5->data = 88;
    head5->next = NULL;

    head4->next = head5;

    node *head6 = NULL;

    head6 = new node();
    head6->data = 45;
    head6->next = NULL;

    head5->next = head6;

    node *head7 = NULL;

    head7 = new node();
    head7->data = 55;
    head7->next = NULL;

    head6->next = head7;

    node *head8 = NULL;

    head8 = new node();
    head8->data = 65;
    head8->next = NULL;

    head7->next = head8;

    node *head9 = NULL;

    head9 = new node();
    head9->data = 15;
    head9->next = NULL;

    head8->next = head9;

    node *head10 = NULL;

    head10 = new node();
    head10->data = 95;
    head10->next = NULL;

    head9->next = head10;

    cout << "1. " << head1->data << " " << head1->next << endl;
    cout << "2. " << head2->data << " " << head2->next << endl;
    cout << "3. " << head3->data << " " << head3->next << endl;
    cout << "4. " << head4->data << " " << head4->next << endl;
    cout << "5. " << head5->data << " " << head5->next << endl;
    cout << "6. " << head6->data << " " << head6->next << endl;
    cout << "7. " << head7->data << " " << head7->next << endl;
    cout << "8. " << head8->data << " " << head8->next << endl;
    cout << "9. " << head9->data << " " << head9->next << endl;
    cout << "10. " << head10->data << " " << head10->next << endl;

    return 0;
}