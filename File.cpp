
///file's everything
#include<bits/stdc++.h>
#define ll long long
int main()
{
    FILE *sajib;
    sajib=fopen("password.txt","w");
    ///writing something into files
    fputs("12345\n",sajib);
    fputs("toor\n",sajib);
    fputs("anonymous\n",sajib);
    ///writing 1 to 10 number into file
    for(ll i=0;i<10;i++)
    {
        fprintf(sajib,"%d\n",i);
    }



    return 0;
}
