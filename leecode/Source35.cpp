#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i]>=target)
		{
			return i;
		}
	}
	return nums.size();
}
int main() {
	int arrar[] = { 1,3,5,6 };
	vector<int> v(arrar,arrar+4);
	cout << searchInsert(v, 7);
	return 0;
}