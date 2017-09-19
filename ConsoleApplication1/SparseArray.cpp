#include "stdafx.h";

#include <map>
#include <iostream>
#include <cassert>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{

	int numberOfStrings;

	int count = 0;
	std::string inputString;
	int numberOfQueries;
	std::string queryString;
	

	std::map<std::string, int> m;
	std::cin >> numberOfStrings;
	
	for (int i = 0; i < numberOfStrings; i++)
	{
		cin >> inputString;
		int currValue = m[inputString];
		if (currValue > 0)
		{
			m[inputString] = currValue + 1;
		}
		else {
			m[inputString] = 1;
		}		
	}
	
	std::cin >> numberOfQueries;
	vector<int> outputArray(numberOfQueries);

	for (int i = 0; i < numberOfQueries; i++)
	{
		cin >> inputString;
		int currValue = m[inputString];

		if (currValue > 0)
		{
			outputArray[i]=m[inputString];
		}
		else {
			outputArray[i] = 0;
		}
	}

	for (int i = 0; i < numberOfQueries; i++) {
		std::cout << outputArray[i] << '\n';
	}
	return 0;
}