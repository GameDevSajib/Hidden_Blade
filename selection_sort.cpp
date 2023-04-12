#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int a[100005];
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    ll n;cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
