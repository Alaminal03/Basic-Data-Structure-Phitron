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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (cin >> x && x != -1)
    {
        insert_tail(head, tail, x);
    }

    Node *curr = head;

    while (curr != NULL)
    {
        Node *temp = curr;

        while (temp->next != NULL)
        {
            if (temp->next->val == curr->val)
            {
                Node *deleteNode = temp->next;
                temp->next = temp->next->next;

                if (deleteNode == tail)
                      tail = temp;
 
                 delete deleteNode;
            }
            else
            {
                 temp = temp->next;
            }
        }

         curr = curr->next;
     }

     Node *print = head;
     while (print != NULL)
    {
        cout << print->val;
          if (print->next != NULL)
            cout << " ";
          print = print->next;
    }

    return 0;
}