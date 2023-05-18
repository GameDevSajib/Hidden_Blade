#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;
int prime[100005];
vector<ll>v;
void seive(ll n)
{
      for(ll i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            v.pb(i);
        }
    }
}
void Segment(ll l,ll r)
{
    if(l==1)l++;
    ll mx=r-l+1;
    int a[mx+1];
    for(ll i=0;i<=mx;i++)a[i]=0;
    for(int p:v)
    {
        if(p*p<=r)
        {
            int i=(l/p)*p;
            if(i<l)i+=p;
            for(;i<=r;i+=p)
            {
                if(i!=p)
                {
                    a[i-l]=1;
                }
            }
        }
    }
    for(ll i=0;i<mx;i++)
    {
        if(a[i]==0)
        {
            cout<<l+i<<endl;
        }
    }
}
int main()
{
    seive(100000);
    ll t;
    ll l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        Segment(l,r);
        cout<<endl;

    }


    return 0;
}
