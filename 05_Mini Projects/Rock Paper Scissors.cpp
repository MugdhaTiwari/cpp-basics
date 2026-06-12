//Rock, Paper, Scissors//

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int comp = rand() % 3 + 1;
    int user;

    cout << "Choose Rock(1), Paper(2) or Scissor(3)" << endl;
    cin >> user;

    // Show computer choice
        if(comp == 1) cout << "Computer chose Rock\n";
        else if(comp == 2) cout << "Computer chose Paper\n";
        else cout << "Computer chose Scissors\n";

    if(user == comp)
    {
       cout << "Draw" << endl;
    }

    else if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2))
    {
        cout << "Congrats!! You Win!" << endl;
    }
    
    else
    {
        cout << "Sorry! You Lose" << endl;
    }
 
    return 0;
}