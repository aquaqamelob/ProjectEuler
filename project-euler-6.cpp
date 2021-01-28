#include <iostream>
#include <cmath>

using namespace std;

int getNumber(int x)
{
	int sumOne=0,getSum=0;
	for(int i=1;i<x;i++)
	{
		sumOne+=pow(i,2);
		getSum+=i;
	}	
	return pow(getSum,2)-sumOne;
}



int main()
{
	cout<<getNumber(101);
	return 0;
}
