// Remove Duplicate Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void getUniqueCharacters(char input_text[], char unique_characters[]);


int main()
{
	char input_text[200];
	char unique_characters[200];


	cin.getline(input_text, 200);


	getUniqueCharacters(input_text, unique_characters);

	cout << unique_characters << endl;
	return 0;
}




void getUniqueCharacters(char input_text[], char unique_characters[])

{
	int unique_index = 0;

	for (int input_index = 0; input_text[input_index] != '\0'; input_index++)
	{
		bool is_already_present = false;

		for (int check_index = 0; check_index < unique_index; check_index++)
		{
			if (input_text[input_index] == unique_characters[check_index])
			{
				is_already_present = true;
				break;
			}
		}
		if (!is_already_present)
		{
			unique_characters[unique_index] = input_text[input_index];
			unique_index++;
		}
	}

	unique_characters[unique_index] = '\0';
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
