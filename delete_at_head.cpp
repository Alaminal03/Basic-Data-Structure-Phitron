#include<bits/stdc++.h>
using namespace std;

class Node
{   public:
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
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_at_head(Node* &head,Node* &tail)
{
    Node *deletenode = head;
    head = head->next;
    delete  deletenode;
    if(head==NULL)
    {
        tail = NULL;
        return;
    }
    head->pre = NULL;
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

    delete_at_head(head,tail);
    print_forword(head);
    


    return 0;
}