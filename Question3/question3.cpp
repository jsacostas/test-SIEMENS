#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void ConcatRemove(string string1, string string2, int operations) {

	int opReq = 0;
	int sizeString1 = string1.length();
	int sizeString2 = string2.length();
	int minSize = min(sizeString1, sizeString2);

	int counter = 0;
	for (counter; counter < minSize; counter++)
	{
		if (string1[counter] == string2[counter])
		{
			continue;
		}
		else
		{
			break;
		}
	}

	for (int i2 = counter; i2 < sizeString1; i2++)
	{
		string1.pop_back();
		cout << string1 << endl;
		opReq += 1;
	}

	for (int i2 = counter; i2 < sizeString2; i2++)
	{
		string1.append(1, string2[i2]);
		cout << string1 << endl;
		opReq += 1;
	}

	if (opReq <= operations)
	{
		cout << endl << "Yes. Operations required: " << opReq << endl;
	}
	else
	{
		cout << endl << "No. Operations required: " << opReq << endl;
	}

}

bool is_lower_alpha_portugues(string phrase)
{
	bool check
		= phrase.find_first_not_of("qwertyuiopasdfghjklçzxcvbnm") != string::npos;

	if (check)
	{
		cout << "Dont use capital letter, special characters, or white spaces" << endl;
	}

	return check;
}

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

	//ConcatRemove(string1, string2, operations);

	return 0;
}