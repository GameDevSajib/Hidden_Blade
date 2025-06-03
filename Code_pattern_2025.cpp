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

int temp[MX];
int num[MX];
int a[MX];
int prime[MX];

vector<int>adj[MX];
bool visited[MX];



class Algo{
public:

};

class DFS_ALGo:public Algo{
public:
        void dfs(int n)
        {
            visited[n]=true;
            for(int i=0;i<adj[n].size();i++)
            {
                if(visited[adj[n][i]]==false)
                {
                    dfs(adj[n][i]);
                }
            }
        }
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
class PrimeNumber:public Algo{
public:
         void Seive()
         {
             for(int i=2;i*i<=100;i++)
             {
                 if(prime[i]==0)
                 {
                     for(int j=i*i;j<=100;j+=i)
                     {
                         prime[j]=1;
                     }
                 }
             }
             for(int i=2;i<=100;i++)
             {
                 if(prime[i]==0)
                 {
                     echo i<<"\n";
                 }
             }

         }
};



class GraphAlgo:public DFS_ALGo{
public:
        void Graph()
        {
            int node,edge;
            read node;
            read edge;

            for(int i=0;i<edge;i++)
            {
                int x,y;
                read x;
                read y;
                adj[x].pb(y);
                adj[y].pb(x);
            }
            dfs(1);
            for(int i=1;i<=node;i++)
            {
                echo "Kar sathe k connected ace "<<i<<" :";
                for(int j=0;j<adj[i].size();j++)
                {
                    echo adj[i][j]<<" ";
                }
                echo "\n";
            }

        }
};


start_
do
    PrimeNumber pn;
    GraphAlgo ga;
    ga.Graph();
    //pn.Seive();




   finish
done

