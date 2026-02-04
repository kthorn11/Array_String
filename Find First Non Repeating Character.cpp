// Find First Non Repeating Character.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char findFirstUniqueCharacter(char input_text[]);


int main()
{

	char input_text[200];
	cin.getline(input_text, 200);

	char result = findFirstUniqueCharacter(input_text);

	if (result == '\0')
		cout << "None" << endl;
	else
		cout << result << endl;
	return 0;

}


char findFirstUniqueCharacter(char input_text[])
{
	for (int current_index = 0; input_text[current_index] != '\0'; current_index++)
	{
		int character_count = 0;
		for (int scan_index = 0; input_text[scan_index] != '\0'; scan_index++)
		{
			if (input_text[current_index] == input_text[scan_index])
			{
				character_count++;
			}
		}
		if (character_count == 1)
		{
			return input_text[current_index];
		}
	}

	return '\0';

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
