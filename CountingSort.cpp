#include<bits/stdc++.h>
#define ll long long
using namespace std;

 const int MAX=100000;
  int a[100005];
  int cnt[MAX];

int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        cnt[a[i]]++;
    }
    for(ll i=0;i<MAX;i++)
    {
        for(ll j=0;j<cnt[i];j++)
        {
            cout<<i<<" ";
        }
    }


    return 0;
}
