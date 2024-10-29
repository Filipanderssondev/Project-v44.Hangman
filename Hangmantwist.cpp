#include <iostream>
#include <vector>
using namespace std;

//void FunctionRules();

char FunctionEnterconsonant()
{  
    char consonant;
    cout << "Please enter a consonant " << endl;
    cin >> consonant;
    return consonant;
};


//int FunctionEnterword();

//int FunctionUsedconsonant();

//int FunctionUsedwords();

//int FunctionWordsize();

//int FunctionSwitchfromlvl1tolvl2();

//int FUnctionQuitgame();

//int FunctionCorrectanswer();

int main()
{  
    vector<char> consonant;
    char userconsonant = FunctionEnterconsonant();
    consonant.push_back(userconsonant);
    cout << "The consonant is " << userconsonant << endl;
    
    return 0;
}