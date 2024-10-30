#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printMainMenu()
{   
    //Opens the file in reading mode
    ifstream f("README.md");

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

int FunctionEnterconsonant();
    //Input a character and save it to a variable
int FunctionEnterword();
    //Input a word(string),  and save it
int FunctionUsedconsonant();
    //Compare to stored characters
int FunctionUsedwords();
    //Compare to stored words
int FunctionWordsize();
    //Compare the input word to the size of hidden word (==5)
int FunctionSwitchfromlvl1tolvl2();
    //Output the switch from Level 1 to Level 2
int FunctionQuitgame();
    //Command to quit the game (Boolean to true)
int FunctionCorrectanswer();
    //Compare the input word to the hidden word
int main()
{
    printMainMenu();

    return 0; 
}