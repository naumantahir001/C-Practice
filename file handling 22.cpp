#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string name;
	int rollnumber;
	cout<<"enter your name";
	cin>>name;
	cout<<"enter rollnumber";
	cin>>rollnumber;

	ofstream myfile;
	myfile.open("file.txt");
	
	myfile<<"name is "<<name<<"and rollnumber is "<<rollnumber<<endl;
	myfile.close();
}

