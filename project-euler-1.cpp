#include <iostream>
using namespace std;
int main() {
 
    int i = 0;
    int sum = 0;
    
    while (i < 1000)
    {
        if (i% 3 == 0 || i % 5 == 0)
        {
            sum+=i;
            i+=1;
        }
        else
        {
            i+=1;
        }
    }
    cout << sum << "\n";
   
  return(0);
}
