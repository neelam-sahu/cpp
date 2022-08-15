#include <iostream>
using namespace std;

int main()
{

  int a, b;
  cout << "enter two number using space. " << endl;
  cin >> a >> b;

  char op;
  cout << "input a operator. " << endl;
  cin >> op;

  switch (op)

  {
  case '+':
    cout << a + b << endl;
    break;

  case '-':
    cout << a - b << endl;
    break;

  case '*':
    cout << a * b << endl;
    break;

  case '/':
    cout << a / b << endl;
    break;

  default:
    cout << "not defined." << endl;
    break;
  }

  return 0;
}