#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n),sum(n);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    sum[0] = a[0];
    for (int i = 0; i < n-1;i++)
    {
        sum[i + 1] = sum[i] + a[i + 1];
    }
    for (int i = n - 1; i >=0;i--)
    {
        cout << sum[i] << " ";
    }

        return 0;
}