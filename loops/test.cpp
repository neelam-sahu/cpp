#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n; // 10

  for (int i = 0; i < n; i++) // for ([initialExpression]; [conditionExpression]; [incrementExpression])
  {
    i++;       // 0, 1, 2, 3, 4
    cout << i << endl; // 1, 2, 3, 4, 5
  }

  return 0;
}
