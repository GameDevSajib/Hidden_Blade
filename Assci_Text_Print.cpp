#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#define do {
#define done }	
#define start_ int main()
#define finish return 0;
using namespace std;

void printASCII(string fileName)
do
     string line="";
     ifstream inFile;
     inFile.open("Demo.txt");
     if(inFile.is_open())
	do    while(getline(inFile,line))
	      do
	            cout<<line<<endl;
	      done
	    
	done
      else
      do
             cout<<"File failed to load"<<endl;
      done
      inFile.close();
done

start_
do
 string fileName ="Demo.txt";
 printASCII(fileName);

 finish;
done

