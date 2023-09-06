#include<bits/stdc++.h>
#define ll long long 
#define do {
#define done }
#define read cin>>
#define echo cout<<
#define newline cout<<endl
#define program_finish
#define BISMILLAH int main()
using namespace std;
int prime[100005]={0};
int num[100005];
int temp[100005];
//vector<int>num;
//vector<int>temp;

void sajib()
	do
	     echo "8th semster";
             newline;
	done

void Margesort(int lo,int hi)
	do
            if(lo==hi) return ;
	    int mid=(lo+hi)/2;
	    Margesort(lo,mid);
	    Margesort(mid+1,hi);
	    int i,j,k;
	    for(i=lo,j=mid+1,k=lo;k<=hi;k++)
	    do
	        if(i==mid+1) temp[k]=num[j++];
		else if(j==hi+1)temp[k]=num[i++];
		else if(num[i]<num[j]) temp[k]=num[i++];
		else temp[k]=num[j++];
	    done

	    for(k=lo;k<=hi;k++)
	    do
	         num[k]=temp[k];
	    done


	done




BISMILLAH
do
    ll n,m;
    read n;
    read m;
    for(ll i=0;i<n;i++)
	    do
	       echo "hello"; 
	       newline;     
            done
    ///
    ///seive for prime number
    for(ll i=2;i*i<=n;i++)
    do
       if(prime[i]==0)
	for(ll j=i*i;j<=n;j+=i)
	 do
	   prime[j]=1;
         done
	 done

     for(ll i=2;i<=n;i++)
     do
         if(prime[i]==0)
	     echo  i <<endl;
     done     

     sajib();
     ll r;
     read r;
     ll lo=1;
     ll hi=r;
     for(ll i=lo;i<=hi;i++)
     do
          read num[i];
     done
     Margesort(lo,hi);
     for(ll i=1;i<=r;i++)
     do
          echo num[i]<<" ";
     done

     program_finish;

done

