#include <iostream>
using namespace std;

void isArmstrong(int n)
{
  int armstrong{n};
  int output{0};
  while (n > 0)
  {
    int lastdigit = n % 10;
    output = output + lastdigit * lastdigit * lastdigit;
    n = n / 10;
  }
    cout <<armstrong<< ((output == armstrong) ? " armstrong number" : " not armstrong number") << endl;
}

int main()
{
  int n1,n2,n3;
  cin >> n1>>n2>>n3;
  isArmstrong(n1);
  isArmstrong(n2);
  isArmstrong(n3);

  return 0;
}
