#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n),v2(n),v3;
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n;i++)
    {
        cin >> v2[i];
    }

    for(int x : v2)
    {
        v3.push_back(x);
    }
    for(int x : v)
    {
        v3.push_back(x);
    }
    for(int x :v3)
    {
        cout << x << " ";
    }
        return 0;
}