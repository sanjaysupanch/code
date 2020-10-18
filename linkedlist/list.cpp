#include <iostream>
using namespace std;

class Node
{

private:
    int data;
    Node *next;

private:
    void insert(int x);
    void print();
};

Node *head;

void Node::insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Node::print()
{
    Node *temp;
    temp = head;
    cout << "\nList is: ";
    while (temp = NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    Node list;
    head = NULL;
    list.insert(1);
    list.print();

    return 0;
}