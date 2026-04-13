//Number guessing game

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
    srand(time(0));
    int secret = rand() % 10 + 1;
    int guess , diff;
    bool guessed = false;

    cout << "Guess the Number between 1-10" << endl;
    cout << "You have 5 attempts" << endl;
    
    for(int i=1; i<=5; i++)
    {
      cout << "Attempt " << i << ":" << endl;
      cin >> guess;
       if (guess == secret)
       {
          guessed = true;
          cout << "Correct! You guessed it right 🎉" << endl;
          break; 
       }
       else
       {
          diff = abs(secret - guess);
          if(diff == 1){
            cout << "Very Close" << endl;
          }
          else if (diff < 4 && diff > 1){
            cout << "Close" << endl;
          }
          else{
            cout << "Too far" << endl;
          }
       }    
    }
    
    if(!guessed)
    { 
      cout << "Game Over!\n" << "The secret number was: " << secret << endl;
    }
    
    return 0;
}

