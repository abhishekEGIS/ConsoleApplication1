/*
Prefix sum is basically sum upto that particular index in the array
sum till that point is basically sum from all the earlier values of the array
these are usually useful in cases of best stock on which day question

arr[i+1] = arr[i]+arr[i+1];

this problem is a based on prefix sum where, 100 which is the value is deducted from 
the index coming after the range as a terminating value.

it means in case of 1,2,100, 100 will be applied to 1 and 2
but 3 should not get the benifit of 100 so it is deleted from the 
current value, and because 3 index didnt get the benift the later indexes 
will not get them too

*/

#include "stdafx.h";
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
int Crush() {
	ll N, K, p, q, sum, i, j, max = 0, x = 0;

	cin >> N >> K;
	vector<ll> a(N + 1);


	for (i = 0; i<K; i++)
	{
		cin >> p >> q >> sum;
		a[p] = a[p] + sum;
		if ((q + 1) <= N)
		{
			a[q + 1] = a[q + 1] - sum;
		}
	}

	for (i = 1; i <= N; i++)
	{
		x = x + a[i];
		if (x>max) max = x;
	}

	cout << max;
	return 0;
}