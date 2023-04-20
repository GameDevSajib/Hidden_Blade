#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    int a[n+5];
    ll k=0;
    while(n>0)
    {
        a[k]=n%2;
        n=n/2;
        k++;
    }
    for(ll i=k-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }



    return 0;
}
