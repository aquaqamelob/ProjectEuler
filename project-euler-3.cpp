#include <iostream>
using namespace std;
int main()
{
	long long bigNumber = 600851475143;
	for (long long i=3; i<=bigNumber;i+=2)
		if(bigNumber %i==0)
			if(bigNumber/i>=i)
				{
					bigNumber/=i;
					i -=2;
				}
	cout<<bigNumber<<endl;
		
	return 0;
}
