#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string temp1 = s;

    for (int i = 0; i <= n-k;i++)
    {
        string temp2 = s;
        sort(temp2.begin()+i, temp2.begin()+i+k);
        if(temp2<temp1)
        {
            temp1 = temp2;
        }
    }
    cout << temp1;

    cout << endl;

    return 0;
}