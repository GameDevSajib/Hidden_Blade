///BISMILLAH


///ber korte hobe j nth prime number ti koto
///problem link:https://www.spoj.com/problems/TDKPRIME/

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

bool prime[90000001];
ll N=90000000;
vector<int>v;
void sieve()
{
    for(ll i=2;i*i<=N;i++)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i;j<=N;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(ll i=2;i<=N;i++)
    {
        if(prime[i]==false)
        {
            v.pb(i);
        }
    }
}
int main()
{
    sieve();
    ll t;
    scanf("%lld",&t);
    while(t--){
        int N;
        cin>>N;
        cout<<v[N-1]<<"\n";
    }
    return 0;
}
