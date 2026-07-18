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

void insert_at_tail(Node *&head, Node *&tail, int val)
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
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int x;

    while (cin >> x && x != -1)
    {
        insert_at_tail(head1, tail1, x);
    }

    while (cin >> x && x != -1)
    {
        insert_at_tail(head2, tail2, x);
    }

    Node *temp1 = head1;
    Node *temp2 = head2;

    bool same = true;
    

    while (temp1 != NULL && temp2 != NULL)
      {
         if (temp1->val != temp2->val)
        {
            same = false;
              break;
          }

         temp1 = temp1->next;
         temp2 = temp2->next;
     }
 

     if (temp1 != NULL || temp2 != NULL)
     {
          same = false;
     }

      if (same)
        cout << "YES";
     else
         cout << "NO";

    return  0;
}