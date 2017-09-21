/*
Maximum subarray problem

Given an array 9,-10,10,-7,6,2,-7
Find maximum sub array basically
10,-7,6,2 make 11 so that is the maximum sub array

brute force is n^2 but kadane's algo can give in n

basically at each point the maximum sub array 
upto that point is calculated and then comparision is made
between current item as stand alone or current item+max array before
*/

#include "stdafx.h";
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	int max = INT_MIN;
	int arr[7] = { 9,-10,10,-7,6,-2,-7 };
	int newArr[7];
	for (int i = 0; i < 7; i++)
	{
		if (i == 0)
		{
			newArr[i] = arr[i];
		}
		else
		{
			if (arr[i] > (newArr[i-1] + arr[i]))
			{
				newArr[i] = arr[i];
			}
			else {
				newArr[i] = newArr[i-1] + arr[i];
			}
		}
		if (newArr[i] > max) { max = newArr[i]; }
	}

	for (int i = 0; i < 7; i++)
	{
		cout << newArr[i];
		cout << " ";
	}
	cout << endl << max;
	return 0;
}
