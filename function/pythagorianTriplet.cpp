#include <iostream>
using namespace std;

bool check(int x,int y,int z)
{

}
int main()
{
  int x,y,z;
  cin >> x>>y>>z;

  if (check(x,y,z))
  {
    cout<<"pythagorean triplet"<<endl;
  }
  else
  {
    cout<<"not pythagorean triplet"<<endl;
  }
}