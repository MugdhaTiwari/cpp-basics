//A program that checks wheater the entered character is a digit, alphabet or a special symbol 

#include<iostream>
using namespace std;
int main()
{
   char ch;

   //Ask the user for input
   cout << "Enter a Digit/Alphabet/Special Symbol";
   cin >> ch;

   //Check if the character lies in the range of English Alphabet 
   if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
   {
    cout << ch << " is an Alphabet" << endl;
   }

   //Check is it is a Digit
   else if(ch>='0' && ch<='9')
   {
    cout << ch << " is a Number" << endl; 
   }
   
   //Any other case is a Special Symbol
   else
   {
    cout << ch << " is a Special Symbol" << endl;
   }

   return 0;
}