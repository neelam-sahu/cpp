#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

  int armstrong{n};
  int output{0};
  while (n > 0)
  {
    int lastdigit = n % 10;
    output = output + lastdigit * lastdigit * lastdigit;
    n = n / 10;
  }
  
  cout <<((output==armstrong)? "armstrong number" :"not armstrong number" )<< endl;
  
  return 0;
}