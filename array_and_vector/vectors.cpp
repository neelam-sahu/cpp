#include <iostream>
#include <vector>

using namespace std;
int main()

{

  // vector <char> vowels;  // empty
  // vector <char> vowels(5);   //5 initialized to 0
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

  cout << vowels[0] << endl;
  cout << vowels[4] << endl;

  // vector <int> test_scores(3)          // 3 element all initialize to 0
  // vector <int> test_scores(3,100)     //  3 element all initialize to 100

  vector<int> test_scores{100, 98, 89};
  cout << "\n Test scores using array syntax: " << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;

  cout << "\n Test scores using vector syntax: " << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << "There are " << test_scores.size() << " scores in vector. " << endl;

  cout << "\n enter 3 test scores: ";
  cin >> test_scores.at(0);
  cin >> test_scores.at(1);
  cin >> test_scores.at(2);

  cout << "\n The updated test scores" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;

  cout << "\nEnter test score to add to the vector: ";
  int score_to_add;
  cin >> score_to_add;
  test_scores.push_back(score_to_add);

  cout << "\nEnter one more test score to add to the vector: ";
  cin >> score_to_add;
  test_scores.push_back(score_to_add);

  cout << "\ntest scores are now : " << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << test_scores.at(3) << endl;
  cout << test_scores.at(4) << endl;
  cout << "There are now " << test_scores.size() << " test scores in vector." << endl;

  // cout<<"These should cause an exception"<<test_scores.at(10)<<endl;

   vector <vector<int>> movie_ratings
  {
      {1, 2, 3, 4},
      {1, 2, 4, 4},
      {1, 3, 4, 5},
  };
  cout << "\n Here are movie rating of reviwer #1 using array syntax " << endl;
  cout << movie_ratings[0][0] << endl;
  cout << movie_ratings[0][1] << endl;
  cout << movie_ratings[0][2] << endl;
  cout << movie_ratings[0][3] << endl;

  cout << "\nHere are movie rating of reviwer #1 using vector syntax" << endl;
  cout << movie_ratings.at(0).at(0) << endl;
  cout << movie_ratings.at(0).at(1) << endl;
  cout << movie_ratings.at(0).at(2) << endl;
  cout << movie_ratings.at(0).at(3) << endl;

  return 0;
}
