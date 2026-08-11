#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node *next;
        Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void print_forword(Node* head)
{
    Node* temp = head;
    while(head != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
     }
     cout << endl;
}
void delete_at_tail(Node* &head,Node* tail)
{
    Node *deleteNode = tail;
    tail = tail->pre;
    delete deleteNode;
    tail->next = NULL;
    if(tail->pre == NULL)
    {
        tail = NULL;
        return;
    }
    tail->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->pre = head;

    a->next = tail;
    tail->pre = a;

    delete_at_tail(head,tail);
    print_forword(head);

    return 0;
}