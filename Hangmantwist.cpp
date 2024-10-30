#include <iostream>
#include <fstream>
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

    vector<size_t> positions;
    vector<char> userConsonants; 
    while (true)
    {
        char userconsonant = Getuserconsonant();
        if (userconsonant == '0') 
        {
            break; 
        }
        if (functionUsedConsonant(userConsonants, userconsonant)) {
            cout << "The conosinant '" << userconsonant << "' has already been used. Try another one." << endl;
            continue;
        }
        userConsonants.push_back(userconsonant);
        size_t pos = randomword.find(userconsonant);
        positions.clear();
        while (pos != string::npos)
        {
            positions.push_back(pos); //kolla var liger bokstaven och spara den
            pos = randomword.find(userconsonant, pos + 1);
        }
            
        if  (!positions.empty())
        {        
            
            cout << "The consonant " << userconsonant << "is in the word at positions: ";   
            for (size_t position : positions)
            {
                cout << position + 1 << " ";
            }
            cout << endl;
        }else{
            cout << "The consonant " << userconsonant << "is not in the word." << endl;
            }
    }    
        
        cout << "All letters entered: ";
        for (char consonant : userConsonants) //skriver ut alla bokstaver som har sparat i vector-consonant
        {
            cout << consonant << " ";
        }
            cout << endl;
        
}




