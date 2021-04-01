#include <string>
#include <algorithm>
using namespace std;

int ConcatRemove(string string1, string string2, int operations) {

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
	// Removing the last element
	for (int i2 = counter; i2 < sizeString1; i2++)
	{
		string1.pop_back();
		cout << string1 << endl;
		opReq += 1;
	}
	// Adding the elements of the second string
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

	return opReq;
}

bool is_lower_alpha_portugues(string phrase)
{
	bool check = phrase.find_first_not_of("qwertyuiopasdfghjkl�zxcvbnm") != string::npos;

	if (check)
	{
		cout << "Don't use capital letter, special characters, or white spaces" << endl;
	}

	return check;
}