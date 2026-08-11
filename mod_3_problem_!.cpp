#include<bits/stdc++.h>
using namespace std;
void running_Sum(int vv[],int nn) 
{
    int sum=0;

    for (int i = 0; i < nn;i++)
    {
        cin >> vv[i];
    }
};
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    running_Sum(v,n);

    return 0;
}