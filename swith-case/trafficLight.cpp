#include<iostream>
using namespace std;

int main()
{
char colour;
cout<<"enter first letter of color. "<<endl;
cin>>colour;

switch (colour)
{
case 'r':
 cout<<"stop"<<endl;
  break;

case 'y':
 cout<<"wait"<<endl;
  break;

  case 'g':
 cout<<"go"<<endl;
  break;

default:
  break;
}

  return 0;
}