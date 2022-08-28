#include <iostream>
using namespace std;

int sum(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int multiple(int a, int b)
{
  return a * b;
}
int division(int a, int b)
{
  return a / b;
}

void calculator(int a, int b, char operation)

{
  if (operation == '+')
  {
      cout << sum(a, b) << endl;
  }
  else if (operation == '-')
  {
    cout << subtract(a, b) << endl;
  }
  else if (operation == '*')
  {
    cout << multiple(a, b) << endl;
  }
  else if (operation == '/')
  {
    cout << division(a, b) << endl;
  }
  else 
  cout << "invalid input"<<endl;
}
int main()
{
  int a, b;
  char operation;
  cin >> a >> b >> operation;

  calculator (a,b,operation);
  return 0;
}