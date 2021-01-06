#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("file.txt");
	myfile<<"this is my new file"<<endl;
	myfile.close();
}

