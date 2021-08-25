#ifndef REVERSEUSERINPUT_H_INCLUDED
#define REVERSEUSERINPUT_H_INCLUDED
using namespace std;
int reverseUserInput(int userInput){
    int reversedUserInput = 0;
    //special case; all single digit integers are palindromes
    if(userInput<10){
        reversedUserInput = userInput;
        return reversedUserInput;
    }
    //normal case; make the LSD the MSD
    int remainderUserInput = userInput;
    int loopCounter = 0;
    int digitParser = 0;
    while(remainderUserInput>0){
        reversedUserInput *= 10;
        reversedUserInput += remainderUserInput%10;
        remainderUserInput/=10;
        loopCounter++;
    }
    return reversedUserInput;
}

#endif // REVERSEUSERINPUT_H_INCLUDED
