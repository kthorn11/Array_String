// Longest Substring Without Repeating Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
	char input_text[300];

	cout << "Enter a string: ";
	cin.getline(input_text, 300);


	bool visited[256] = { false };


	int start_index = 0;
	int end_index = 0;
	int max_length = 0;

	while (input_text[end_index] != '\0')
	{
		char current_char = input_text[end_index];

		while (visited[current_char] == true)
		{
			char left_char = input_text[start_index];
			visited[left_char] = false;
			start_index++;
		}


		visited[current_char] = true;

		int current_length = end_index - start_index + 1;
		if (current_length > max_length)
		{
			max_length = current_length;
		}
		end_index++;

	}
	cout << "Longest length without repeating characters = " << max_length << endl;

	return 0;
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
