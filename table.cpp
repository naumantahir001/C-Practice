#include<iostream>
using namespace std;
main()
{
	cout<<"This Programme is written for table only."<<"\n";
	cout<<"Created by: Muhammad Nauman Tahir"<<"\n";
	cout<<"Which table do you want? Please Enter any digit ";
    int table;
    int end;
	cin>>table;
	cout<<"Where do you want to end your table? Please enter that digit. ";
	cin>>end;
	for(int i=1;i<=end;i++)
	{cout<<table<<"x"<<i<<"="<<table*i<<"\n";
	}
}
