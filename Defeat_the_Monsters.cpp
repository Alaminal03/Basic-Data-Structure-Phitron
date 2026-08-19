#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int count =0;
        int a, b, c;
        cin >> a >> b >> c;

        if(c%3==0 && a*2 + c/3 == b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

   
    }   

    return 0;
}