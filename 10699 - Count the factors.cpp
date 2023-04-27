///BISMILLAH
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void primefact(ll n)
{
        ll cnt=0;
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                cnt++;
                while(n%i==0)
                {
                    n/=i;
                }
            }
        }
        if(n>1)
        cnt++;
        cout<<cnt<<endl;
}

int main()
{
    ll n;
    while(cin>>n){
    if(n==0) break;
    cout<<n<<" : ";
    primefact(n);
    }
    return 0;
}
