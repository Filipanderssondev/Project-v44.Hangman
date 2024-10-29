#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

vector<char> Getuserconsonant()
{  
    vector<char> consonant;
    char getconsonant;
        
    cout << "Please enter a letter(enter '0' to stop)" << endl;
    while (true) //Loop kör tills player ange 0
    {
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
    vector<char>userconsonant = Getuserconsonant();
    cout << "All letters entered: ";
    for (char consonant : userconsonant) //skriver ut alla bokstaver som har sparat i vector-consonant
    {
        cout << consonant << " ";
    }
        cout << endl;
     return 0;
}