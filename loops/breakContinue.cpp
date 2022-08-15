#include <iostream>
using namespace std;

int main()
{
  int poketmoney{};
  cout << "enter the poketmoney " << endl;
  cin >> poketmoney;

  for (int date = 1; date <= 30; date++)
  {
    if (date % 2 == 0)
    {
      continue;
    }

    if (poketmoney <= 300)
    {
      cout << "your poket money is not enough to go out." << endl;
      break;
    }

    cout << date << " go out today. " << endl;
    poketmoney -= 300;
    cout << "pocket money left: " << poketmoney << endl;
    cout << "\n";
  }

  return 0;
}