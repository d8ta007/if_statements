#include <iostream>

using namespace std;

int main()
{
  int answer;

  cout << "[1] Please Select 1 for a Comment" << endl;
  cout << "[2] Please Select 2 for a Insult" << endl;
  cout << "[3] Please Select 3 for a Compliment" << endl;
  cout << "[4] Please Select 4 for a Knock Knock Joke" << endl;

  cin >> answer;


  if(answer == 1)
  {
    cout << "Today is 12/16/15" << endl;  
  } 

  if(answer == 2)
  {
    cout << "Your hair is ugly" << endl;
  }

  if(answer == 3)
  {
    cout << "I like your dirty fingernails" << endl;
  }

  if(answer == 4)
  {
    cout << "Knock Knock, who is there? Sarah, Sarah Who? Sarah Doctor in the house, I've got a belly ache" << endl; 
  } 

  return 0;
}
