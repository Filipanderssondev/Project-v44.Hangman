#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <algorithm>
#include <cstring>
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
class Player
{
private:
    string name;
public:
    Player(const string& playerName) : name(playerName) {}
    string getName () const {
        return name;
    }
};

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
        if (getconsonant == '0') return 0; //if user enter 0, return 0 to indicate stopping
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
// Function to check if all consonants in the word have been guessed
bool allConsonantsGuessed(const string& word, const vector<char>& guessedConsonants) {
    for (char c : word) 
    {
        // Check if character is a consonant and is not in guessed consonants
        if (isalpha(c) && !strchr("aeiou", c) && find(guessedConsonants.begin(), guessedConsonants.end(), c) == guessedConsonants.end()) 
        {
            return false; // Return false if any consonant is not guessed
        }
    }
    return true; // Return true if all consonants are guessed
}

void guesses_left (int left)
{
    if(left ==12)
    {
        std::cout << "\n";

    }

    else if(left==11)
    {
    std::cout << "____\n";
    }
    else if(left ==10)
    {
    std::cout << " "<< endl;
    std::cout << " |      " << endl; 
    std::cout << " |      " << endl;
    std::cout << " |      " << endl;
    std::cout << " |       " << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==9)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |      " << endl; 
    std::cout << " |      " << endl;
    std::cout << " |      " << endl;
    std::cout << " |       " << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==8)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |      |" << endl; 
    std::cout << " |      " << endl;
    std::cout << " |      " << endl;
    std::cout << " |       " << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==7)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |/      |" << endl; 
    std::cout << " |      " << endl;
    std::cout << " |      " << endl;
    std::cout << " |       " << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==6)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |/      |" << endl; 
    std::cout << " |      (_)" << endl;
    std::cout << " |      " << endl;
    std::cout << " |       " << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==5)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |/      |" << endl; 
    std::cout << " |      (_)" << endl;
    std::cout << " |       |" << endl;
    std::cout << " |       " << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==4)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |/      |" << endl; 
    std::cout << " |      (_)" << endl;
    std::cout << " |       |" << endl;
    std::cout << " |       |" << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==3)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |/      |" << endl; 
    std::cout << " |      (_)" << endl;
    std::cout << " |      \\|" << endl;
    std::cout << " |       |" << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==2)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |/      |" << endl; 
    std::cout << " |      (_)" << endl;
    std::cout << " |      \\|/" << endl;
    std::cout << " |       |" << endl;
    std::cout << " |      " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
    else if(left ==1)
    {

    std::cout << " _______ "<< endl;
    std::cout << " |/      |" << endl; 
    std::cout << " |      (_)" << endl;
    std::cout << " |      \\|/" << endl;
    std::cout << " |       |" << endl;
    std::cout << " |      / " << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }

    else if(left ==0)
    {
    std::cout << " _______ "<< endl;
    std::cout << " |/      |" << endl; 
    std::cout << " |      (_)" << endl;
    std::cout << " |      \\|/" << endl;
    std::cout << " |       |" << endl;
    std::cout << " |      / \\" << endl;
    std::cout << " |\n";
    std::cout << "_|___\n";
    }
} 

        
int main()
{   
    printMainMenu();
    srand(static_cast<unsigned int>(time(nullptr))); // Seed for random number generation
    string filename = "words.txt"; //Word file
    string randomword = getrandomword(filename); //Get a random 5-letter word
    string name1, name2;                // Adding players name to make it more personalized
    cout << "Enter name for player 1: ";
    cin >> name1;
    cout << "Enter name for player 2: ";
    cin >> name2;

    Player player1(name1);
    Player player2(name2);
    if (randomword.empty()) return 1;//If word is find print it
    
        cout << "Random 5-letter word: " << randomword << endl;
        
    vector<size_t> positions; // Vector to store positions of the consonant in the word
    vector<char> userConsonants; // Vector to store all user-entered consonants
    int turn = 0; //Created turns so it can switch between the players
    int totalGuesses = 12; // Maximum number of guesses allowed
    
    while (totalGuesses > 0)    // Loop until user decides to stop or runs out of guesses
    {
        Player& currentPlayer = (turn % 2 == 0) ? player1 : player2; //So they switch between players
        cout << currentPlayer.getName() << "'s turn." << endl;
        char userconsonant = Getuserconsonant(); // Get a consonant from the user
        if (userconsonant == '0') 
        {
            break; // Exit loop if user enters '0'
        }
        if (FunctionUsedconsonant(userConsonants, userconsonant)) // Check if the consonant has already been used
        {
            cout << "The conosonant '" << userconsonant << "' has already been used. Try another one." << endl;
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
            turn++;
        }else{   // If consonant not found, reduce number of guesses and display message
            cout << "The consonant " << userconsonant << " is not in the word." << endl;
            turn++;
            --totalGuesses;
        }
        cout << "Number of guesses left:" << totalGuesses << endl;
        
        if (allConsonantsGuessed(randomword, userConsonants))   // If all consonants are guessed, allow the user to guess the word
        {
            cout << "Level 1 is complete; all consonants have been correctly guessed." << endl;// clarifing the change from level 1 to level 2
            cout << "Now starting Level 2. You need to guess the correct word." << endl;
            break;
        }
}         
    
    if (totalGuesses > 0)// Word guessing phase
    {
        string guessedWord;
        while (totalGuesses > 0) 
        {   
            Player& currentPlayer = (turn % 2 == 0) ? player1 : player2; //So they switch between players
            cout << currentPlayer.getName() << "'s turn." << endl;
            cout << "Please enter your guess for the word: ";
            cin >> guessedWord;
            --totalGuesses;
            turn++;
            
        if (guessedWord == randomword) {
            cout << "Congratulations! " << currentPlayer.getName() << " guessed the word correctly!" << endl;
            break;
        }else 
        {
            cout << "Sorry, that's not correct. Please try agian " << endl;
            cout << "Guesses left: " << totalGuesses << endl;
        }
        }
        if (totalGuesses == 0) 
        {
            cout << "You've run out of guesses! The correct word was: " << randomword << endl;
        }
    } 
    
    cout << "All consonants entered: ";  // Display all guessed consonants
    for (char consonant : userConsonants)
    {
        cout << consonant << " ";
    }
    cout << endl;
    return 0;
}
