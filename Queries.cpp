#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_node(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
        return;

    // Delete head
    if (index == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
            tail = NULL;

        return;
    }

    Node *temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        if (temp == NULL || temp->next == NULL)
            return; // Invalid index

        temp = temp->next;
    }

    if (temp->next == NULL)
        return; // Invalid index

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    if (deleteNode == tail)
        tail = temp;

    delete deleteNode;
}

void print_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    
    {
        int X, V;
           cin >> X >> V;

         if (X == 0)
        {
              insert_head(head, tail, V);
         }
          else if (X == 1)
          {
            insert_tail(head, tail, V);
          }
          else if (X == 2)
        { 
                delete_node(head, tail, V);
         }

         print_list(head);
    }

    return 0;
}