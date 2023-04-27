///BISMILLAH
#include<bits/stdc++.h>
#define ll long long
#define mo 100000007
using namespace std;

ll power(ll base,ll n,ll mod)
{
    ll result=1;
    while(n)
    {
        if(n%2!=0)
        {
            result=(result*base)%mod;
            n--;
        }
        else{
            base=(base*base)%mod;
            n/=2;
        }
    }
    return result;
}
int main()
{
  ll t;cin>>t;
  while(t--)
  {
     ll n,m;
     cin>>n>>m;
     cout<<power(n,m,1e9)<<endl;

  }

  return 0;
}
