#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long val;
    Node *next;

     Node(long long val)
     {
        this->val = val;
        this->next = NULL;
    }
 };

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    long long x;
    while (cin >> x && x != -1)
    {
        Node *newNode = new Node(x);

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

    long long mx = LLONG_MIN;
    long long mn = LLONG_MAX;

    Node *tmp = head;
    while (tmp != NULL)
    {
         if (tmp->val > mx)
            mx = tmp->val;
        if (tmp->val < mn)
            mn = tmp->val;
        tmp = tmp->next;
    }

    cout << mx - mn << endl;

    return 0;
}