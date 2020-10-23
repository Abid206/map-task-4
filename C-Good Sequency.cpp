#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    op();

    map<int, int> m;
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int a;
        cin>> a;
        m[a]++;
    }
    int ans = 0;

    for(auto u:m)
    {
        if(u.second>=u.first)
            ans += (u.second-u.first);
        else ans += u.second;
    }

    cout<< ans<<endl;

    return 0;
}



