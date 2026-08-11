#include<stdio.h>

struct Node
{
    int val;
    struct Node *next;
};

int main()
{
    struct Node m, n, l, p;
    struct Node *t;

    m.val = 100;
    m.next = &n;

    n.val = 200;
    n.next = &l;

    l.val = 300;
    l.next = &p;

    p.val = 400;
    p.next = NULL;

    t = &m;
    printf("%d\t%p\n", t->val, t->next);
    t = &n;
    printf("%d\t%p\n", t->val, t->next);
    t = t->next;
    printf("%d\t%p\n", t->val, t->next);
    t = t->next;
    printf("%d\t%p\n", t->val, t->next);

    printf("\n\n=== Code Execution Successful ===\n\n");

    return 0;
}