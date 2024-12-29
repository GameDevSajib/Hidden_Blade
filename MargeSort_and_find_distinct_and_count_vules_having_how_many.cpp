#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define do {
#define done }
#define echo std::cout<<
#define read std::cin>>
#define start_ int main()
#define finish return 0;

using namespace std;

int temp[100005];
int num[100005];

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
        else if(j==hi+1) temp[k]=num[i++];
        else if(num[i]<num[j]) temp[k]=num[i++];
        else temp[k]=num[j++];
    }
    for(k=lo;k<=hi;k++)
    {
        num[k]=temp[k];
    }
}

void solve()
{

   int a[100]={0};
   int b[100]={0};
   int c[100]={0};
   int d[100]={0};
   int cnt[100]={0};
   int n;read n;
   int lo=1,hi=n;
   for(int i=1;i<=hi;i++)
   {
       read num[i];
   }
   /// b is unsorted array
     for(int i=lo;i<=hi;i++)
    {
       b[i]=num[i];
       cnt[b[i]]++;
    }




    Marge(lo,hi);
    ///c is now sorted array
   for(int i=lo;i<=hi;i++)
   {
       c[i]=num[i];
   }

   ///making array distinct
   int k=0;
   for(int i=lo;i<=hi;i++)
   {
       if(c[i]!=c[i+1])
       {
           d[k]=c[i];
           k++;
       }
   }

   ///printing the values
   echo "distinct values"<<"\n";
   for(int i=0;i<k;i++)
   {
      cout<<d[i]<<"\n";
   }
     echo "mapping values "<<"\n";
    for(int i=lo;i<=hi;i++)
   {
       if(cnt[i]>0)
       cout<<cnt[i]<<"\n";
   }









}
start_
do
     //ll t;read t;
     //while(t--){
     solve();
     //}



  finish
done








