#include <iostream>
using namespace std;

int main()
{
  int a{}, b{};

  cout << "Enter two numbers sprated by space: ";
  cin >> a >> b;

  int sum = a + b;
  cout << "sum of " << a << " and " << b << " is " << sum << "." << endl;

  return 0;
}
