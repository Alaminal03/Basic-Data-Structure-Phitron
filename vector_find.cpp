#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,4,5,6,7,8,1};

    auto it = find(v.begin(), v.end(), 5);

    if(it==v.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}