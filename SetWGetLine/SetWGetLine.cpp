//================================
// Author: Jack Grimes
// Date: 09-20-23
// Desc: lots of important cin stuff
//================================
#include <string>
#include <iostream>


using namespace std;
int main() {
    //Have user enter their first and last name with a space between
    //if you use cin before getline() you need to use cin.ignore() before the getline() statement.
    /*string fullName;
    int favNum;

    cout << "Enter your favorite number: ";
    cin >> favNum;
    cin.ignore();

    cout << "Enter your first and last name: ";
    getline(cin, fullName);

    cout << "Hello there, " << fullName << ". Your fav num is... " << favNum << endl;*/


    //    string name = "Beth";
    //    string hi = "hello ";
    //    string greeting = hi + name;
    //
    //    cout << greeting << endl;
    //    //+= says tale anything already stored in greeting and add the new string to the end
    //    // this is the short hand for greeting = greeting + " and Bob";
    //    greeting += " and Bob";
    //    cout << greeting << endl;
    //

    //ask the user to enter a word
    //tell the user what thwe last letter of the word is.

    string word;
    char letter;
    cout << "Enter a word" << endl;

    cin >> word;

    letter = word.at(word.length() - 1); //using the length function -1 since the index is one off

    cout << letter;
}
    
