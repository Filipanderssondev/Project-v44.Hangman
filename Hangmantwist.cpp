#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<string> FunctionEnterword();

void display_status(vector<string> incorrect, string answer); 



int main()
{
    int wrongGuess=0;
    string guess; 
    
    while(wrongGuess<12)
    {

        //Level 2 asks user to guess a word
        vector<string> userGueesedWords = FunctionEnterword();
        display_status(userGueesedWords, guess); 

        cout<<"You already guessed these words: \n"; 
        for (string word : userGueesedWords)
        {
            cout << word << " ";
        }    

    }

    return 0; 
}

vector<string> FunctionEnterword()
{
    vector<string> guessedWords;
    string getWord; 

    cout<<"Please enter a word with 5 letters in lowecase: \n"; 
    getline(cin, getWord); 
    
    guessedWords.push_back(getWord); 

    return guessedWords; 
}

void display_status(vector<string> incorrect, string answer)
{
  cout<<"Incorrect Guesses: \n";

  for(int i = 0; i<incorrect.size(); i++)
  {
    cout<<incorrect[i]<<" ";
  }

  cout<<"\nCorrect word:\n";

  for(int i = 0; i<answer.length(); i++)
  {
    cout<<answer[i]<<" ";
  }
}