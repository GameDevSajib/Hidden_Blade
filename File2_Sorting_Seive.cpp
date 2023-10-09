
#include<bits/stdc++.h>
#define ll long long

using namespace std;
int num[100005],temp[100005];

void sajib()
{
    for(int i=0;i<5;i++)
        cout<<"hello"<<endl;


}
void Seive(ll n)
{
    int prime[100005]={0};
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
            cout<<i<<endl;
        }
    }
}

void Marge(int lo,int hi)
{
    if(lo==hi) return;
    int mid=(lo+hi)/2;
    Marge(lo,mid);
    Marge(mid+1,hi);
    int i,j,k;
    for(i=lo,j=mid+1,k=lo;k<=hi;k++)
    {
        if(i==mid+1) temp[k]=num[j++];
        else if(j==hi+1)temp[k]=num[i++];
        else if(num[i]<num[j])temp[k]=num[i++];
        else temp[k]=num[j++];
    }
    for(k=lo;k<=hi;k++)
    {
        num[k]=temp[k];
    }
}
void file1()
{
    FILE *bu;
    bu=fopen("siku.txt","w");
    for(int i=0;i<20;i++)
        fprintf(bu,"%d\n",i);

}
void file2()
{
    FILE *cse;
    cse=fopen("password.txt","w");
    char s[100005];
    for(ll i=0;;i++)
    {
        scanf("%s",s);
    ll len=strlen(s);
    if(len==1){
        break;
    }
    else{
    fprintf(cse,"%s\n",s);
    }
    }


}



int main()
{

   int sum=0;
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)///o(n)
   {
       for(int j=1;j<=n;j++)///o(n)
       {
           sum=sum+i;///o(n^2)
       }
   }
   cout<<sum<<endl;
   sajib();
   Seive(n);
   int lo=1,hi=n;
   for(ll i=1;i<=n;i++)
    cin>>num[i];
   Marge(lo,hi);
   for(int i=1;i<=n;i++)
   {
       cout<<num[i]<<" ";
   }
   file1();
   file2();



    return 0;
}
