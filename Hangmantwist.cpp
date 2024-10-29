#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <cctype>
#include <ctime>

using namespace std;

string getrandomword(const string& filename)
{   
    ifstream file(filename);
    vector<string> words;
    string word;

    if (file.is_open())   
    {
        while (file >> word)
        {
            if(word.length() == 5)
            {
            words.push_back(word);
            }
        }
        file.close();
    }   else
        {
            cerr<< "Unable to open file: " << filename << endl;
            return "";
        }
    
    if (!words.empty()) {
        int randomIndex = rand() % words.size();
        return words[randomIndex];
    } else {
        std::cerr << "No 5-letter words found in the file." << std::endl;
        return "";
    }
}   




vector<char> Getuserconsonant()
{  
    vector<char> consonant;
    char getconsonant;
        
    cout << "Please enter a letter(enter '0' to stop)" << endl;
    while (true){ //Loop kör tills player ange 0
    
        cin >> getconsonant;
        if (getconsonant == '0')
        {
            break;      //stop om det är 0
        }
        
        if (isalpha(getconsonant) && isupper(getconsonant)) //Om det är en storbokstav måste player ange en ny
        {
            cout << "Uppercase letters are not allowed. Please enter a lowercase letter." << endl;
            continue; 
        }
        consonant.push_back(getconsonant); //alla bokstaver sparas i vector-consonant
    }
    return consonant;  
}
        
int main()
{   
    srand(static_cast<unsigned int>(time(nullptr)));
    string filename = "words.txt";
    string randomword = getrandomword(filename);
    if (!randomword.empty()) 
    {
        std::cout << "Random 5-letter word: " << randomword << std::endl;
    }

   
    vector<char>userconsonant = Getuserconsonant();
    cout << "All letters entered: ";
    for (char consonant : userconsonant) //skriver ut alla bokstaver som har sparat i vector-consonant
    {
        cout << consonant << " ";
    }
        cout << endl;
    
}