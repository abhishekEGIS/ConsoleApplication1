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


int main() {

	int maxSum = -9999;
	int sum;
	vector< vector<int> > arr(6, vector<int>(6));
	for (int arr_i = 0; arr_i < 6; arr_i++) {
		for (int arr_j = 0; arr_j < 6; arr_j++) {
			cin >> arr[arr_i][arr_j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4; k++) {
			sum = arr[i][k] + arr[i][k+1] + arr[i][k+2] 
				+ arr[i+1][k+1] + arr[i+2][k] + arr[i+2][k+1] + arr[i+2][k+2];
			if (sum >= maxSum) {
				maxSum = sum;
			}
		}
	}

	cout << maxSum;

	return 0;
}
