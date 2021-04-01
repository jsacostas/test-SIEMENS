#include <iostream>
#include <string>

int main()
{
	std::string phraseAux;

	std::cout << "Input a string:" << std::endl;
	getline(std::cin, phraseAux);

	int size = 0;

	while (phraseAux[0 + size] != '\0')
	{
		size = size + 1;
	}

	std::cout << "The size of the phrase is: " << size << std::endl;

}