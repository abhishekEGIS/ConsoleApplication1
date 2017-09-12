#include "stdafx.h";

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int lengthArray;
	int leftRotation;
	
	cin >> lengthArray;
	cin >> leftRotation;

	vector<int> arr(lengthArray);
	vector<int> leftArray(lengthArray);
	vector<int> rightArray(lengthArray);

	for (int i = 0; i < lengthArray; i++) {
		cin >> arr[i] ;
	}

	for (int i = 0; i < leftRotation; i++) {
		rightArray[i] = arr[i];
	}

	for (int i = leftRotation, k=0; i < lengthArray; i++,k++) {
		leftArray[k] = arr[i];
	}

	for (int i = 0; i<lengthArray-leftRotation; i++)
	{
		arr[i] = leftArray[i];
	}
	
	for (int i = 0, k=leftRotation+1; i<leftRotation; i++,k++)
	{
		arr[k] = rightArray[i];
	}
	
	for (int i = 0; i < lengthArray; i++) {
		cout << arr[i];
	}

		return 0;
}
