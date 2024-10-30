#include <iostream>
#include <fstream>
<<<<<<< HEAD
using namespace std;

void printMainMenu()
{   
    //Opens the file in reading mode
    ifstream f("README.txt");
=======
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
string getrandomword(const string& filename)
{   
    ifstream file(filename);
    vector<string> words;
    string wordsfromfil;
>>>>>>> origin/main

    //Checks if the file is opened correctly
    if (!f.is_open())
    {
<<<<<<< HEAD
        cerr << "Error message!: Couldnt open the file!";
        return;
=======
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
    
    if (!words.empty()) {
        size_t randomIndex = static_cast<size_t>(rand()) % words.size();
        return words[randomIndex];
    } else {
        cerr << "No 5-letter words found in the file." << endl;
        return "";
    }
}   

char Getuserconsonant()
{  
    
    char getconsonant;
    while (true)
    {
        cout << "Please enter a letter to search(enter '0' to stop)" << endl;
        cin >> getconsonant;
        if (getconsonant == '0') return '0';
        if (isalpha(getconsonant) && !isupper(getconsonant) && getconsonant != 'a' && getconsonant != 'e' && getconsonant != 'i' && getconsonant != 'o' && getconsonant != 'u') //Om det är en storbokstav måste player ange en ny
        {
            return getconsonant;
        }else if (isupper(getconsonant))
        {
            cout << "Uppercase letters are not allowed. Please enter a lowercase letter." << endl;
        }else {
            cout << "Invalid input. Please enter a lowercase consonant." << endl;
        }
    }
}     
        
int main()
{   
    printMainMenu();
    srand(static_cast<unsigned int>(time(nullptr)));
    string filename = "words.txt";
    string randomword = getrandomword(filename);
    
    if (!randomword.empty()) 
    {
        cout << "Random 5-letter word: " << randomword << endl;
    } 
    else 
    {
        return 1;
>>>>>>> origin/main
    }

    //String variable to to store the read data
    string s;

    // Read each line of the file and print it to the
    // Standard output stream till the whole file is 
    // Completely read
    while (getline(f, s))
    {
<<<<<<< HEAD
        cout << s << endl;
    }

    //Close the file
    f.close();
    return;
    //I got help from Geeks4Geeks to solve this 
}
=======
        char userconsonant = Getuserconsonant();
        if (userconsonant == '0') 
        {
            break; 
        }
        if (FunctionUsedconsonant(userConsonants, userconsonant)) 
        {
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
            
            cout << "The consonant " << userconsonant << " is in the word at positions: ";   
            for (size_t position : positions)
            {
                cout << position + 1 << " ";
            }
            cout << endl;
        }
        else{
            cout << "The consonant " << userconsonant << " is not in the word." << endl;
        }
    }    
        
        cout << "All letters entered: ";
        for (char consonant : userConsonants) //skriver ut alla bokstaver som har sparat i vector-consonant
        {
            cout << consonant << " ";
        }
            cout << endl;
        
    }

>>>>>>> origin/main

int main()
{   
    printMainMenu();
}