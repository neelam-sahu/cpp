#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> vector1;
  vector<int> vector2;
  vector1.push_back(10);
  vector1.push_back(20);
  vector2.push_back(100);
  vector2.push_back(200);

  cout << "\nElements of vector1 are: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;
  cout << "There are " << vector1.size() << " elements in vector1" << endl;

  cout << "\nElements of vector2 are: " << endl;
  cout << vector2.at(0) << endl;
  cout << vector2.at(1) << endl;
  cout << "There are " << vector2.size() << " elements in vector2" << endl;

  vector<vector<int>> vector_2D;

  vector_2D.push_back(vector1);
  vector_2D.push_back(vector2);
  cout << "\nelements of vector_2D are" << endl;
  cout << vector_2D.at(0).at(0);
  cout << "   " << vector_2D.at(0).at(1) << endl;
  cout << vector_2D.at(1).at(0);
  cout << "  " << vector_2D.at(1).at(1) << endl;

  vector1.at(0) = 1000;

  cout << "\nElements of vector1 are: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;

  vector_2D.at(0).at(0) = vector1.at(0);

  cout << "\nelements of vector_2D are now" << endl;
  cout << vector_2D.at(0).at(0);
  cout << "   " << vector_2D.at(0).at(1) << endl;
  cout << vector_2D.at(1).at(0);
  cout << "  " << vector_2D.at(1).at(1) << endl;

  return 0;
}