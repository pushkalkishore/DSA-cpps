#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertattail(node *&head, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = NULL;
}

void insetathead(node *&head, int data)
{
    node *n = new node(data);

    n->next = head;
    head = n;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{

    node *head = new node(1);
    insertattail(head, 12);
    insertattail(head, 12);
    insertattail(head, 12);
    insetathead(head, 13);
    print(head);
    return 0;
}