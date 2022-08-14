#include <iostream>
using namespace std;

int main()
{
  /*
  num is prime or not pshudo code
  1. take a input integer
  2. check its prime or not
  tips: use for loop and start it from 2
        use % oprator and check
        if it's % = 0
        print prime number and break the loop
        if loop runs n time print not prime number

  */

  int num{};
  cout << "Enter a number to check it's prime or not: ";
  cin >> num;  // 5
  int flag{0}; // 0

  for (int i{2}; i < num / 2; i++) 
  {
    if (num % i == 0) // false
    {
      cout << num << " is not a prime number." << endl;
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    cout << num << " is prime number." << endl;

  return 0;
}

// 10 / 2

