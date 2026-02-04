// Pattern Analyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int getLength(char text[]);
int findPatternIndex(char input_text[], char search_pattern[]);

int main()
{
    char input_text[300];
    char search_pattern[100];


    cin.getline(input_text, 300);
    cin.getline(search_pattern, 100);


    int input_text_length = 0;
    while (input_text[input_text_length] != '\0')
    {
        input_text_length++;
    }
    int search_pattern_length = 0;
    while (search_pattern[search_pattern_length] != '\0')
    {
        search_pattern_length++;
    }
    int found_start_index = -1;
    for (int text_index = 0;
        text_index <= input_text_length - search_pattern_length;
        text_index++)
    {
        bool is_match = true;

        for (int pattern_index = 0;
            pattern_index < search_pattern_length;
            pattern_index++)
        {
            if (input_text[text_index + pattern_index] !=
                search_pattern[pattern_index])
            {
                is_match = false;
                break;
            }


        }
        if (is_match)
        {
            found_start_index = text_index;
            break;
        }
    }
    cout << found_start_index << endl;
    return 0;

}


int getLength(char text[])
{

    int length = 0;
    while (text[length] != '\0')
    {
        length++;
    }

    return length;

}
int findPatternIndex(char input_text[], char search_pattern[])
{

    int input_text_length = getLength(input_text);
    int search_pattern_length = getLength(search_pattern);


    int found_start_index = -1;

    for (int text_index = 0; text_index <= input_text_length < search_pattern_length; text_index++)
    {
        bool is_match = true;


        for (int pattern_index = 0; pattern_index < search_pattern_length; pattern_index++)
        {
            if (input_text[text_index + pattern_index] != search_pattern[pattern_index])
            {
                is_match = false;
                break;
            }
        }
        return found_start_index;
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
