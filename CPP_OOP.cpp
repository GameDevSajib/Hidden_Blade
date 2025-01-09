#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define echo std::cout<<
#define read std::cin>>
#define start_ int main()
#define finish return 0;

using namespace std;

int temp[100005];
int num[100005];
int prime[100005];


class Algo{
public:
        void seive()
        {
            int n=1000;
            for(int i=2;i*i<=n;i++)
            {
                if(prime[i]==0)
                {
                    for(int j=i*i;j<=n;j+=i)
                    {
                        prime[j]=1;
                    }
                }
            }
            for(int i=2;i<=n;i++)
            {
                if(prime[i]==0)
                {
                    echo i<<"\n";
                }
            }
        }

public:
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
};

///inheritence
class Algo2:public Algo{
  public:
          void MargeInput()
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


class Recursion:public Algo{

 public:
         int result;
         int sum(int k)
         {
             if(k>0)
             {
                 return k+sum(k-1);
             }
             else{
                finish
             }
         }
};

start_
do
     ///making object
       Algo a;
       a.seive();
       Algo2 m;
       m.MargeInput();

       ///Recursion Sum
       Recursion R;
       int result=R.sum(5);
       cout<<result<<"\n";



      finish
done





