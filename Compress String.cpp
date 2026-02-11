// Compress String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void printRunLength(char input_word[]);


int main()
{

    char input_word[200];
    cin >> input_word;

    printRunLength(input_word) ;

    cout << endl;
    return 0;
}
void printRunLength(char input_word[])
{
    for (int character_index = 0; input_word[character_index] != '\0';)
    {
        char current_character = input_word[character_index];
        int repeat_count = 0;

        while (input_word[character_index] == current_character)
        {
            repeat_count++;
            character_index++;
        }
        cout << current_character << repeat_count;
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
