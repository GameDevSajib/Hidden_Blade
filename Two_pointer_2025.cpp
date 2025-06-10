#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MX 100005
#define do {
#define done }
#define read std::cin>>
#define echo std::cout<<
#define start_ int main()
#define finish return 0;

using namespace std;

int a[MX];
int b[MX];
int c[MX];
int d[MX];
int e[MX];

int temp[MX];
int num[MX];

class Algo{
public:

};

class MargeSort:public Algo{
public:
         void Marge(int lo,int hi)
         {
             if(lo==hi)return;
             int mid=(lo+hi)/2;
             Marge(lo,mid);
             Marge(mid+1,hi);
             int i,j,k;
             for(i=lo,j=mid+1,k=lo;k<=hi;k++)
             {
                 if(i==mid+1)temp[k]=num[j++];
                 else if(j==hi+1)temp[k]=num[i++];
                 else if(num[i]<num[j])temp[k]=num[i++];
                 else temp[k]=num[j++];
             }
             for(k=lo;k<=hi;k++)
             {
                 num[k]=temp[k];
             }
         }
};
class MargeSortInput:public MargeSort{
public:
          void Solve()
          {
              int n;read n;
              int lo=1,hi=n;
              for(int i=lo;i<=hi;i++)
              {
                  read num[i];
              }
              Marge(lo,hi);
              for(int i=1;i<=n;i++)
              {
                  echo num[i]<<"\n";
              }

          }
};

class Twopinter:public MargeSort{
public:
          void Solve()
          {
             int n;read n;
             vector<int>v;
             for(int i=0;i<n;i++)
             {
                 read a[i];
             }
             for(int i=0;i<n;i++)
             {
                 read b[i];
             }
             for(int i=0;i<n;i++)
             {
                 v.pb(a[i]);
                 v.pb(b[i]);
             }
             int lo=0,hi=v.size();
             for(int i=lo;i<=hi;i++)
             {
                 num[i]=v[i];
             }
             Marge(lo,hi);
             for(int i=1;i<=v.size();i++)
             {
                 echo num[i]<<" ";
             }
          }
};
class Adding_Two_Sorted_Array_using_Two_Pointer:public MargeSort{
public:
         void Solve()
         {
             int n;read n;
             vector<int>v2;
             for(int i=0;i<n;i++)
             {
                 read a[i];
             }
              for(int i=0;i<n;i++)
             {
                 read b[i];
             }
             for(int i=0,j=0;i<n||j<n;)
             {
                 if(j>=n||i<n&&a[i]<=b[j])
                 {
                     v2.pb(a[i]);
                     i++;
                 }
                 else{
                     v2.pb(b[j]);
                     j++;
                 }
             }
             for(int i=0;i<v2.size();i++)
             {
                 echo v2[i]<<" ";
             }
         }






};

start_
do
    MargeSortInput msi;
   // msi.Solve();

    Twopinter tp;
    //tp.Solve();

    Adding_Two_Sorted_Array_using_Two_Pointer abcd;
    abcd.Solve();



  finish
done

