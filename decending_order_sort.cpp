#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 39, 10, 34, 50, 43, 34, 10, 22, 10};

    l.sort(greater<int>());

    for(int val : l)
    {
        cout << val << endl;
    }

    return 0;
}