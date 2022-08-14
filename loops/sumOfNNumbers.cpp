#include <iostream>
using namespace std;

int main()
{
  // write your code here;
  int m;
  cout << "enter the value of m ";
  cin >> m;

  int sum = 0;
   for (int i = 1; i <= m; i++)
  {
    sum = sum + i;
  }
  cout << "sum of numbers is. " << sum << endl;

  return 0;
}