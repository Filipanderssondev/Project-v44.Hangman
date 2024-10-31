#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <algorithm>
#include <cstring>
using namespace std;


string getrandomword(const string& filename)
{   
    ifstream file(filename);
    vector<string> words;
    string wordsfromfil;
     // Check if the file opened successfully
    if (file.is_open())   
    {
         // Reads words from the file and only stores 5-letter words
        while (file >> wordsfromfil)
        {
            if(wordsfromfil.length() == 5)
            {
            words.push_back(wordsfromfil);
            }
        }
        file.close();
    }   else
        {
            cerr<< "Unable to open file: " << filename << endl;
            return "";
        }
       // Selects a random word from the list
    if (!words.empty()) {
        size_t randomIndex = static_cast<size_t>(rand()) % words.size();
        return words[randomIndex];
    } else {
        cerr << "No 5-letter words found in the file." << endl;
        return "";
    }
}   

char Getuserconsonant()// Function toi get a consonant from player
{  
    
    char getconsonant; 
    while (true) 
    {
        cout << "Please enter a letter to search(enter '0' to stop)" << endl;
        cin >> getconsonant;
        if (getconsonant == '0') return '0'; //if user enter 0, return 0 to indicate stopping
        //Check if the input is a lowercase consonant(not a vowel)
        if (isalpha(getconsonant) && !isupper(getconsonant) && getconsonant != 'a' && getconsonant != 'e' && getconsonant != 'i' && getconsonant != 'o' && getconsonant != 'u') //Om det är en storbokstav måste player ange en ny
        {
            return getconsonant;
        }else if (isupper(getconsonant)) //Check if the input is an uppercase letter, prompt for a lowercase consonant
        {
            cout << "Uppercase letters are not allowed. Please enter a lowercase letter." << endl;
        }else {
            cout << "Invalid input. Please enter a lowercase consonant." << endl; // Prompt for a valid lowercase consonant if input is invalid
        }
    }
}     
        
int main()
{   
    //printMainMenu();
    srand(static_cast<unsigned int>(time(nullptr))); // Seed for random number generation
    string filename = "words.txt"; //Word file
    string randomword = getrandomword(filename); //Get a random 5-letter word
    
    if (randomword.empty()) return 1;//If word is find print it
    
        cout << "Random 5-letter word: " << randomword << endl;
        
    vector<size_t> positions; // Vector to store positions of the consonant in the word
    vector<char> userConsonants; // Vector to store all user-entered consonants
    int totalGuesses = 12; // Maximum number of guesses allowed
    
    while (totalGuesses > 0)    // Loop until user decides to stop or runs out of guesses
    {
        char userconsonant = Getuserconsonant(); // Get a consonant from the user
        if (userconsonant == '0') 
        {
            break; // Exit loop if user enters '0'
        }
        userConsonants.push_back(userconsonant);
        size_t pos = randomword.find(userconsonant);
        positions.clear();
        while (pos != string::npos)
        {
            positions.push_back(pos); //kolla var liger bokstaven och spara den
            pos = randomword.find(userconsonant, pos + 1);
        }
            
        if  (!positions.empty())     // If the consonant is found, display positions
        {        
            
            cout << "The consonant " << userconsonant << " is in the word at positions: ";   
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




