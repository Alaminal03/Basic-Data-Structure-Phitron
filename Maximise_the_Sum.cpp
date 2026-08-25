#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        long long sum = 0;
        long long mx = LLONG_MIN;
   
        for (int i = 0; i < 5;i++)
        {
            long long  a;
            cin >> a;

            sum += a;

            mx = max(mx, a);
        }
        cout << 2 * mx - sum << endl;
    }

    return 0;
}