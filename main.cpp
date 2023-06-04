#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    //this generates a random seed based on the time and the seed us used to make a random number between 1-100
    unsigned seed = time(0);
    srand(seed);
    int numToGuess = (rand()%(1 - 100));
    int currentGuess;
    int attempts = 5;

    cout <<"A random number from 1-100 has been picked" << endl;
    cout <<"You have 5 attempts to guess the number" << endl;

    cout << numToGuess;

    while (attempts >= 1)
    {
       cout << "attempt " << attempts << " : ";
       cin >> currentGuess;

       if(currentGuess > numToGuess){
        cout << currentGuess << " is more than the number to guess" << endl;
       }
       else if(currentGuess < numToGuess){
        cout << currentGuess << " is less than the number to guess" << endl;
       }
       else{
        cout <<currentGuess << "is the correct number!" << endl;
        cout << "you guessed the number in " << (4 - attempts) << " guesses!";
        return 0;
       }

       attempts--;
    }

    cout <<"You could not get it in 5 attempts!"<<endl << "the correct number was: " << numToGuess;

    return 0;
}