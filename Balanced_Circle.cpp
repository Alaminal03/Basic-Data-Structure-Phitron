#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while(N--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        int min = a[0];
        int count = 1;

        for (int i = 1; i < n;i++)
        {
            if(a[0]==a[i])
            {
                count++;
                break;
            }
        }
        if(count >=2)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}