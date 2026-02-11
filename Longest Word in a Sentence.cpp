// Longest Word in a Sentence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void findLongestWord(char input_sentence[], int& start, int& length);
void printWord(char input_sentence[], int start, int length);

int main()
{
    
    char input_sentence[300];
    cin.getline(input_sentence, 300);


    int longest_word_start = 0;
    int longest_word_length = 0;

    findLongestWord(input_sentence, longest_word_start, longest_word_length);
    printWord(input_sentence, longest_word_start, longest_word_length);

    return 0;

}




void findLongestWord(char input_sentence[], int& start, int& length)
{


    int longest_word_start = 0;
    int longest_word_length = 0;

    int current_word_start = 0;
    int current_word_length = 0;

    for (int character_index = 0; ;character_index++)
    {
        if (input_sentence[character_index] == ' ' || input_sentence[character_index] == '\0')
        {
            if (current_word_length > longest_word_length)
            {

                longest_word_length = current_word_length;
                longest_word_start = current_word_start;
            }

            if (input_sentence[character_index] == '\0')
                break;

            current_word_length = 0;
            current_word_start = character_index + 1;
        }
        else
        {
            current_word_length++;
        }


    }

    start = longest_word_start;
    length = longest_word_length;
}


void printWord(char input_sentence[], int start, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << input_sentence[start + i];

    }
    cout << endl;

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
