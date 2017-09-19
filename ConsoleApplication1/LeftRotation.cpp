/*
For left rotation. Get to the rotation point and create a split.
now swap on split point
*/


#include "stdafx.h";
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int LeftRotation() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int lengthArray;
	int rotation;
	int laterArrayLength, earlierArrayLength;

	cin >> lengthArray;
	cin >> rotation;
	// rotation = lengthArray - rotation; //simply uncomment this for right rotation
	// basically right roation is left rotation at a different piviot point
	laterArrayLength = lengthArray - rotation;
	earlierArrayLength = rotation;

	vector<int> arr(lengthArray);
	vector<int> earlierArray(earlierArrayLength);
	vector<int> laterArray(laterArrayLength);
	vector<int> newArr(lengthArray);


	for (int i = 0; i < lengthArray; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < rotation; i++) {
		earlierArray[i] = arr[i];
	}

	for (int i = rotation, k = 0; i < lengthArray; i++, k++) {
		laterArray[k] = arr[i];
	}

	for (int i = 0; i<laterArrayLength; i++)
	{
		newArr[i] = laterArray[i];
	}

	for (int i = 0, k = lengthArray - rotation; i<earlierArrayLength; i++, k++)
	{
		newArr[k] = earlierArray[i];
	}

	for (int i = 0; i < lengthArray; i++) {
		cout << newArr[i];
		cout << " ";
	}

	return 0;
}