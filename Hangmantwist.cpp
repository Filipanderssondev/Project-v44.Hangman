#include <iostream>
#include <string>
#include <vector>
using namespace std;

void FunctionRules();
    // Add an output for the rules (Level 1 and Level 2)
int FunctionEnterconsonant();
    //Input a character and save it to a variable
vector<string> FunctionEnterword();
bool FunctionUsedconsonant(const vector<char>& consonants, char userconsonant) {
    //Checks the consonants with stored ones to find duplicates
    for (char c : consonants) {
        if (c == userconsonant) {
            return true;
        }
    }
    return false;
}

    //Compare to stored characters
int FunctionUsedwords();
    //Compare to stored word
int main(){
     //Level 2 asks user to guess a word
    vector<string> userGueesedWords = FunctionEnterword();
    cout<<"You already guessed these words: \n"; 
    for (string word : userGueesedWords) {
        
        cout << word << " ";
    }
    return 0; 
    }
    vector<string> FunctionEnterword()
{
    vector<string> guessedWords;
    string getWord; 
    int max_Char = 5;
    int checker = 1;

    do
    {
        cout<<"Please enter a word with 5 letters in lowecase:"; 
        getline(cin, getWord); 
        if(getWord.length() > max_Char || getWord.length() < max_Char) {
            std::cout << "The word '" << getWord << "' isn't 5 characters long" << std::endl;
        checker = 1;
    }   else {
        checker = 0;
        guessedWords.push_back(getWord); 
        }
      }while (checker == 1);
    return guessedWords; 
}