#include<iostream>
using namespace std;
main()
{
	int one;
	int two;
	cout<<"please enter 1st value";
	cin>>one;
	cout<<"please enter 2nd value";
	cin>>two;
	float result = (float) one/two;
	int result1 = one%two;
	cout<<"The product of both values is = "<<result<<"\n";
	cout<<"The product of both values is = "<<result1;
}
