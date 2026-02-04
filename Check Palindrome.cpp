// Check Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int getLength(char word[]);
bool isPalindrome(char word[], int length);

int main()
{
	char word[100];
	cin >> word;

	int length = getLength(word);

	if (isPalindrome(word, length))
		cout << "Palindrome" << endl;

	else
		cout << "Not Palindrome" << endl;

	return 0;

}

int getLength(char word[])
{
	int length = 0;
	while (word[length] != '\0')
	{
		length++;
	}

	return length;
}










bool isPalindrome(char word[], int length)
{
	int left_index = 0;
	int right_index = length - 1;


	while (left_index < right_index)
	{
		if (word[left_index] != word[right_index])
		{
			return false;
		}
		left_index++;
		right_index--;
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
