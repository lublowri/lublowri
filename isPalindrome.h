#ifndef ISPALINDROME_H_INCLUDED
#define ISPALINDROME_H_INCLUDED
#include "reverseUserInput.h"
using namespace std;
bool isPalindrome(int userInput){
    int reversedUserInput;
    reversedUserInput = reverseUserInput(userInput);
    if(userInput == reversedUserInput){
        cout << userInput << " is a palindrome" << endl;
        return true;
    }
    cout << userInput << " is not a palindrome" << endl;
    return false;
}


#endif // ISPALINDROME_H_INCLUDED
