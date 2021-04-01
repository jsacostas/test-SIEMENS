#include <iostream>
#include "Question4.h"

int main()
{
	int size1 = 0, size2 = 0, operations = 0;
	bool check = true;

	string string1;
	string string2;

	while (size1 > 1000 || size1 < 1 || check)
	{
		cout << "Enter the first string: ";
		getline(cin, string1);
		size1 = string1.length();
		check = is_lower_alpha_portugues(string1);
	}

	while (size2 > 1000 || size2 < 1 || check)
	{
		cout << "Enter the second string: ";
		getline(cin, string2);
		size2 = string2.length();
		check = is_lower_alpha_portugues(string2);
	}

	while (operations > 100 || operations < 1)
	{
		cout << "Number of operations to test in the conversion: ";
		cin >> operations;
	}

	ConcatRemove(string1, string2, operations);

	return 0;
}