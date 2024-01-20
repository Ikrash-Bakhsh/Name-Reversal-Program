#include<iostream>
#include<string>
using namespace std;

void name(string n);

int main()
{
	string name;
	cout<<"Enter any name : ";
	getline(cin, name);
	cout<<"Full Name = "<<name<<endl;
	name(name);
	return 0;
}
void name(string n)
{
	string firstname, lastname, reversename;
	unsigned space= n.find(" ");
	firstname= n.substr(0, space);
	lastname= n.substr(space+1);
	reversename = lastname+" "+firstname;
	cout<<"Reversed name = "<<reversename<<endl;
}
