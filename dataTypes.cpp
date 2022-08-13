#include <iostream>
using namespace std;

int main()
{

  // Data types
  int a{}; // decleration
  a = 20;  // initialisation
  cout << "size of int in bytes " << sizeof(a) << endl;

  float b{};
  cout << "size of float in bytes " << sizeof(b) << endl;

  char c{};
  cout << "size of char in bytes " << sizeof(c) << endl;

  bool d{};
  cout << "size of bool in bytes " << sizeof(d) << endl;
  
  short int si;
  long int li;
  cout<<"size of short int in bytes "<< sizeof(si)<<endl;
  cout<<"size of long int in bytes "<< sizeof(li)<<endl;
  
  return 0;
}
