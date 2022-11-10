#include <iostream>
using namespace std;
int main()
{
  char vowel[]{'a', 'e', 'i', 'o', 'u'};
  cout << " \nThe first vowel is: " << vowel[0] << endl;
  cout << " The last vowel is: " << vowel[4] << endl;

  double hi_temperature[]{90.1, 89.8, 77.5, 81.6};
  cout << " \nfisrt high temperature is : " << hi_temperature[0] << endl;
  hi_temperature[0] = 100.7;
  cout << " The first high temperature now is: " << hi_temperature[0] << endl;

  int test_scores[]{100, 90, 80, 70, 60};
  cout << "\nFirst score of index[o] ; " << test_scores[0] << endl;
  cout << "Second score of index[o] ; " << test_scores[1] << endl;
  cout << "Third score of index[o] ; " << test_scores[2] << endl;
  cout << "Forth score of index[o] ; " << test_scores[3] << endl;
  cout << "Fifth score of index[o] ; " << test_scores[4] << endl;
  cin >> test_scores[0];
  cin >> test_scores[1];
  cin >> test_scores[2];
  cin >> test_scores[3];
  cin >> test_scores[4];
  cout << "First score of index[o] ; " << test_scores[0] << endl;
  cout << "Second score of index[o] ; " << test_scores[1] << endl;
  cout << "Third score of index[o] ; " << test_scores[2] << endl;
  cout << "Forth score of index[o] ; " << test_scores[3] << endl;
  cout << "Fifth score of index[o] ; " << test_scores[4] << endl;

  cout<<"\n Notice what the value of array name is: "<<test_scores<<endl;
  return 0;
}