#include<iostream>
using namespace std;
main()
{
	int salary;
	cout<<"Please enter your salary";
	cin>>salary;
	int res = salary- 1000;
	double deduction, payable;
	
	switch (salary/10000)
	{
		case 0:
		deduction = 0;
		payable = salary - deduction;
		break;
		case 1:
		deduction = 1000;
		payable = salary - deduction;
		break;
		default:
		deduction = salary * 7/100;
		payable = salary - deduction;
		break;
	}
	cout<<"your salary - deduction = "<<salary<<"-"<<deduction<<"="<<payable;

}

