#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <cctype>
#include <ctime>
using namespace std;

void printMainMenu()
{   
    //Opens the file in reading mode
    ifstream f("README.txt");

    //Checks if the file is opened correctly
    if (!f.is_open())
    {
        cerr << "Error message!: Couldnt open the file!";
        return;
    }

    //String variable to to store the read data
    string s;

    // Read each line of the file and print it to the
    // Standard output stream till the whole file is 
    // Completely read
    while (getline(f, s))
    {
        cout << s << endl;
    }

    //Close the file
    f.close();
    return;
    //I got help from Geeks4Geeks to solve this 
}

bool FunctionUsedconsonant(const vector<char>& consonants, char userconsonant) {
    //Checks the consonants with stored ones to find duplicates
    for (char c : consonants) {
        if (c == userconsonant) {
            return true;
        }
    }
    return false;
}
string getrandomword(const string& filename) // Function to get a random 5-letter word from a file
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
    printMainMenu();
    srand(static_cast<unsigned int>(time(nullptr))); // Seed for random number generation
    string filename = "words.txt"; //Word file
    string randomword = getrandomword(filename); //Get a random 5-letter word
    
    if (!randomword.empty()) //If word is find print it
    {
        cout << "Random 5-letter word: " << randomword << endl;
    } 
    else 
    {
        return 1;
    }


    vector<size_t> positions; // Vector to store positions of the consonant in the word
    vector<char> userConsonants; // Vector to store all user-entered consonants
    int numGuesses = 12; // Maximum number of guesses allowed
    
    while (true && numGuesses > 0)    // Loop until user decides to stop or runs out of guesses

    {
        char userconsonant = Getuserconsonant(); // Get a consonant from the user
        if (userconsonant == '0') 
        {
            break; // Exit loop if user enters '0'
        }
        if (FunctionUsedconsonant(userConsonants, userconsonant)) // Check if the consonant has already been used
        {
            cout << "The conosinant '" << userconsonant << "' has already been used. Try another one." << endl;
            continue;
        }    
        userConsonants.push_back(userconsonant);  // Store the consonant in userConsonants

        size_t pos = randomword.find(userconsonant);    // Find and store all positions of the consonant in the random word
        positions.clear(); // Clear previous positions
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
        }
        else{   // If consonant not found, reduce number of guesses and display message
            cout << "The consonant " << userconsonant << " is not in the word." << endl;
            --numGuesses; 
            cout << "Number of guesses left:" << numGuesses << endl;    // write out the number of guesses left
        }
    }    
        
        cout << "All letters entered: ";
        for (char consonant : userConsonants) //skriver ut alla bokstaver som har sparat i vector-consonant
        {
            cout << consonant << " ";
        }
            cout << endl;
        
    }





