/*This is a file for reversing an array
lessons learnt
vector<int> arr(10) declare a vector instead of int arr[10]
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


int PrintArray() {

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}
	for (int i = (n - 1); i >= 0; i--) {
		cout << arr[i];
		cout << " ";
	}
		return 0;
}