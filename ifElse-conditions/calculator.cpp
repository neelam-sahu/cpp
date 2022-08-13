#include <iostream>
using namespace std;

int main()
{
  /*
  1. take input 2 itegers
  2. take input operations as char
  3. make conditions
    - agar operations  = + to jod do
    - nahito agar operations  = - to ghata do
    - nahito agar operations  = * to guna kar do
    - nahito agar operations  = / to bh+ag de do
    - nahito galat operation dale ho bol do
  */

  int a, b;
  char operation;

  cin >> a >> operation >> b;

  if (operation == '+')
  {
    cout << a + b << endl;
  }
  else if (operation == '-')
  {
    cout << a - b << endl;
  }
  else if (operation == '*')
  {
    cout << a * b << endl;
  }
  else if (operation == '/')
  {
    cout << a / b << endl;
  }
  else
  {
    cout << "not defined";
  }

  return 0;
}
