#include <iostream>
#include <vector>
using namespace std;

void FunctionRules();
    // Add an output for the rules (Level 1 and Level 2)
int FunctionEnterconsonant();
    //Input a character and save it to a variable
int FunctionEnterword();
    //Input a word(string),  and save it
bool FunctionUsedconsonant(const vector<char>& consonants, char userconsonant) {
    for (char c : consonants) {
        if (c == userconsonant) {
            return true;
        }
    }
    return false;
}

    //Compare to stored characters

int FunctionUsedwords();
    //Compare to stored words
int FunctionWordsize(const std::string& word) {
    //Compare the input word to the size of hidden word (==5)
    return word.size() == 5;
    }
    
int FunctionSwitchfromlvl1tolvl2();
    //Output the switch from Level 1 to Level 2
int FunctionQuitgame();
    //Command to quit the game (Boolean to true)
int FunctionCorrectanswer();
    //Compare the input word to the hidden word
int main(){

    if (FunctionUsedconsonant (consonants, userconsonant)) {
        cout << "This consonant has already been used." << endl;
    }
        else {
            consonants.push_back(userconsonant);
        }

    return 0; }