

///file's everything
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    FILE *sajib;
    sajib=fopen("bu.txt","w");
    ///writing something into files
    fputs("12345\n",sajib);
    fputs("toor\n",sajib);
    fputs("anonymous\n",sajib);
    ///writing 1 to 10 number into file
    for(ll i=0;i<10;i++)
    {
        fprintf(sajib,"%d\n",i);
    }
    ///amra chassi amrai input nia file er moddo add korbo
    /*int n=0;
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        else{
            fprintf(sajib,"%d\n",n);
        }

    }*/

    ///jdi string nei tahole
    char s[100005];
    for(ll i=0;;i++)
    {
        scanf("%s",s);
        ll len=strlen(s);
        if(len==1)
        {
            break;
        }
        else{
            fprintf(sajib,"%s\n",s);
        }

    }






    return 0;
}
