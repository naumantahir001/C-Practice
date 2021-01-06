#include<iostream>
using namespace std;
int main()
{
	int array[4][2] = { {012,389},
	                   {25,95},
	                   {75,36},
					   {56,85} };
	array[2][1]=111;
					   
	for(int row = 0; row < 4; ++row)
	{
	   for(int col = 0; col < 2; ++col)
	  {
	   cout<<array[row][col]<<"   ";
	  }
    cout<<endl;
    }

}

