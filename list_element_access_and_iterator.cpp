#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 34, 56, 32, 565, 343};
    cout << l.back() << endl;
    cout << l.front() << endl;
    cout << *next(l.begin(), 2);

    return 0;
}