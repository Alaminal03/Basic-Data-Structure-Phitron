#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < n;j++)
        {
            for (int i = 0; i < n - 1;i++)
            {
                if(a[i]>a[i+1] && a[i]+a[i+1]<=k)
                {
                    swap(a[i], a[i + 1]);
                }
            }
        }
        for (int i = 0; i < n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}    