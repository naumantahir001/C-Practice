#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the value for a"<<endl;
	cin>>a;
	int b;
	cout<<"enter the value for b"<<endl;
	cin>>b;
	int c;
	cout<<"enter the value for c"<<endl;
	cin>>c;
	int sum;
	sum=a+b+c;
	int average;
	average=(a+b+c)/3;
	int r;
	cout<<"enter the word either you want to print sum or average";
	cin>>r;
	if (r=sum)
	{
	cout<<"your sum is "<<sum<<endl;
    }
	else
	{
	cout<<"your average is "<<average;
    }
	

}

