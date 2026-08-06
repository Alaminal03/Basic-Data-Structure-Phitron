#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node *pre;
        Node *next;
    Node(int val)
    {
        this->val = val;
        this->pre = NULL;
        this->next = NULL;
    }    
};
void print_forword(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void delete_at_any_pos(Node* head,int indx)
{
    Node *temp = head;
    for (int i = 1; i < indx;i++)
    {
        temp = temp->next;
    } 
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->pre = temp;
    delete deleteNode;
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

    delete_at_any_pos(head, 1);
    print_forword(head);

    return 0;
}