    // Rock-Paper-Scissors Game (Advanced Version)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int user, comp;
    
    srand(time(0));
    comp = rand() % 3 + 1;

    
    int userScore = 0, compScore = 0;

    cout << "Rock-Paper-Scissors (Best of 5)" << endl;
    cout << "First to 3, Wins!" << endl;

    while(userScore < 3 && compScore < 3)
    {
        cout << "Choose Rock(1), Paper(2), Scissors(3): " << endl;
        cin >> user;

        if(user < 1 || user > 3)
        {
            cout << "Invalid input! Try again." << endl;
        }


        // Show computer choice
        if(comp == 1) cout << "Computer chose Rock\n";
        else if(comp == 2) cout << "Computer chose Paper\n";
        else cout << "Computer chose Scissors\n";

        // Game logic
        if(user == comp)
        {
            cout << "It's a draw!" << endl;
        }
        else if((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2))
        {
            cout << "You win this round!" << endl;
            userScore++;
        }
        else
        {
            cout << "Computer wins this round!" << endl;
            compScore++;
        }

        // Show score
        cout << "Score → You: " << userScore << " | Computer: " << compScore << endl;
    }

    // Final result
    if(userScore == 3)
        cout << "🎉 You won the game!" << endl;
    else
        cout << "💀 Computer won the game!" << endl;

    return 0;
}