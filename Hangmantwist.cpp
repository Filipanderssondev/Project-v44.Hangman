#include <iostream>
#include <string>
#include <vector>
using namespace std;

void FunctionRules();

int FunctionEnterconsonant();

vector<string> FunctionEnterword();

int FunctionUsedconsonant();

int FunctionUsedwords();

int FunctionWordsize();

int FunctionSwitchfromlvl1tolvl2();

int FUnctionQuitgame();

int FunctionCorrectanswer();

int main()
{

    //Level 2 asks user to guess a word
    vector<string> userGueesedWords = FunctionEnterword();
    cout<<"You already guessed these words: \n"; 
    for (string word : userGueesedWords)
    {
        cout << word << " ";
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
