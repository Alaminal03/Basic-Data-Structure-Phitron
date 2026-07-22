#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        vector<int> b=a;
        sort(b.begin(), b.end());
        bool found = true;
        for (int i = 0; i < a.size();i++)
        {
            if(a[i]!=b[i])
            {
                found = false;
                break;
                        }
            
        }
    if(found)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
    }
    

    return 0;
}