#include <iostream>
#include <cmath>
#include <string>
#include "isPalindrome.h"
#include "reverseUserInput.h"
using namespace std;
int main(){
    int userInput;
    string userContinue = "yes";
    while (userContinue == "yes"){
        cout << "Enter a number" << endl;
        cin >> userInput;
        //remove negative sign from input
        userInput = abs(userInput);
        isPalindrome(userInput);
        cout << "Continue - yes - no?" << endl;
        cin >> userContinue;
        while (userContinue != "yes" && userContinue != "no"){
            cout << "Continue - yes - no?" << endl;
            cin >> userContinue;
        }

    }
    return 0;
}
