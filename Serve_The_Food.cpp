#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int main()   
{
    ll n;
    cin >> n;
    queue<ll>q;
    for(ll i = 0; i < n; ++i)
    {
        ll x;
        cin >> x; 
        if(x == 1)
        {
            ll x;
            cin >> x;
            q.push(x);
        } 
        else if(x == 2)
        {
            if(q.empty())
            {
                cout << -1 << endl;
            } 
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
}