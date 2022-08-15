#include <iostream>
using namespace std;

int main()
{
  int start{}, end{};
  cin >> start >> end; // 10 100

  for (size_t i = start; i <= end; i++)
  {
    // 10 11 12 13 14
    int flag{0};
    for (size_t j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        flag = 1;
        break;
      }
    }

    if (flag == 0)
      cout << i << endl;
  }

  return 0;
}