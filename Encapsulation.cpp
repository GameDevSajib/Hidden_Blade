#include<bits/stdc++.h>
#define ll long long 
using namespace std;

class Student{
	public:
		int id;
		string name;

		void display()
		{
			cout<<id<<endl;
			cout<<name<<endl;

		}

};


int main()
{
	Student s1;
	s1.id=1;
	s1.name="Md Sajibur Rahman";
	s1.display();





	return 0;
}
