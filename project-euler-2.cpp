#include <iostream>
using namespace std;

int main()
{
	int totalNumber = 0;
	

	int oneNumber = 1;
	int twoNumber = 2;
	int threeNumber = 0;
	
	while (twoNumber <= 4000000)
	{
		threeNumber = oneNumber + twoNumber;
		if (twoNumber % 2 == 0)
			totalNumber += twoNumber;
		oneNumber = twoNumber;
		twoNumber = threeNumber;
	}

	cout << totalNumber;

	return 0;
}
