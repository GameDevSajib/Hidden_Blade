
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

    bool sajib(ll year){
    vector<ll>v;
    while(year>0)
    {
        ll x=year%10;
        year=year/10;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    ll len=v.size();
    ll flag=0;
    for(ll i=0;i<len-1;i++)
    {
        if(v[i]==v[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0) return true;
    else return false;
    }

int main()
{
    vector<ll>v;
    ll year;
    cin>>year;
    while(year++)
    {
       if(sajib(year))
        {
            cout<<year<<endl;
            return 0;
        }
    }
    return 0;
}
