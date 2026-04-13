//Number guessing game

#include<iostream>
using namespace std;
int main()
{
    int secret = 73, guess;
    bool guessed = false;

    cout << "Guess a 2-digit Number" << endl;
    cout << "You have 5 attempts" << endl;
    
    for(int i=1; i<=5; i++)
    {
      cout << "Attempt " << i << ":" << endl;
      cin >> guess;
       if (guess == secret)
       {
          guessed = true;
          cout << "Correct! You guessed it right" << endl;
          break; 
       }
       else if (guess > secret)
       {
          
          cout << "Sorry! Too high" << endl;
          
       }
       else
       {
          cout << "Sorry! Too low" << endl;
          
       }
         
    }
    
    cout << "Game Over!\n";

    if(!guessed)
    {
      cout << "The secret number was: " << secret << endl;
    }
    
    return 0;
}

