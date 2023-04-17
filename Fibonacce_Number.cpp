//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll f1=0;
    ll f2=1;
    ll f3=0;
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
    if(i==1)
    {
        cout<<f1<<" ";
        continue;
    }
    if(i==2)
    {
        cout<<f2<<" ";
        continue;
    }
    f3=(f1+f2);
    f1=f2;
    f2=f3;
    cout<<f3<<" ";
    }
    return 0;
}

