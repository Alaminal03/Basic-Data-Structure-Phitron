#include<bits/stdc++.h>
using namespace std;   
void fun()
{
    long long t; 
    cin >> t;
    vector<long long>v(t),aa;
    long long i =1;

    for(long long x : v)
    {
        cin >> x;
        if(i % 2 == 0)
        {
            v.push_back(x);
        }
        else
        {
            aa.push_back(x);
        }
        i++;
    }
    long long mx = *max_element(v.begin(),v.end())+*max_element(aa.begin(),aa.end());

    cout << mx << endl;
}
int main()
{
    fun();
}