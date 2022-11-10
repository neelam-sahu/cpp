#include<iostream>
using namespace std;
int main()
{
  int n{5};
  string people[n];
  people[0] = "neelam";
  people[1] = "leena";
  people[2] = "sita";
  people[3] = "geeta";
  people[4] = "shyam";
   
   for (size_t i = 0; i < n; i++)
   {
     cout<<people[i]<<endl;
   }
   

  return 0;
}