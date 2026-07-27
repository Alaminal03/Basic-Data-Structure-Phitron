#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};
    v.pop_back();
    v.insert(v.begin() + 2, 100);  //value insert
    vector<int> v2;
    v2 = v;
    for(int x : v2)
    {
        cout << x << endl;
    }

    return 0;
}