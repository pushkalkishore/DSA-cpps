#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;int c;int a;int d;
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

void print(node* head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void reversell(node* &head)
{
    node* currptr = head;
    node* prevptr = NULL;
    node* nextptr;
    while (currptr!= NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    head = prevptr;
}

int main()
{

    node *head = new node(1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insetathead(head, 5);
    print(head);
    reversell(head);
    cout<<endl;
    print(head);
    return 0;
}