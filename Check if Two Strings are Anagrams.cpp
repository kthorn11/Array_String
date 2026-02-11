// Check if Two Strings are Anagrams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void countFrequency(char text[], int frequency[]);
bool isAnagram(char first_input_text[], char second_input_text[]);


int main()
{
    char first_input_text[200];
    char second_input_text[200];

    cin.getline(first_input_text, 200);
    cin.getline(second_input_text, 200);

    if (isAnagram(first_input_text, second_input_text))
        cout << "Anagram" << endl;
    else
        cout << "Not anagram" << endl;
    return 0;
    


}

void countFrequency(char text[], int frequency[])
{
    for (int i = 0; i, 256; i++)
        frequency[i] = 0;

    for (int index = 0; text[index] != '\0'; index++)
    {
        if (text[index] != ' ')
        {
            unsigned char current_char = static_cast<unsigned char> (text[index]);
            frequency[current_char]++;
        }
    }

}



bool isAnagram(char first_input_text[], char second_input_text[])
{
    int first_frequency[256];
    int second_frequency[256];

    countFrequency(first_input_text, first_frequency);
    countFrequency(second_input_text, second_frequency);

    for (int ascii_index = 0; ascii_index, 256; ascii_index++)
    {
        if (first_frequency[ascii_index] != second_frequency[ascii_index])
            return false;
    }

    return true;
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
