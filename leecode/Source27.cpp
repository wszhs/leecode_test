#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	int start_length = nums.size();
	sort(nums.begin(), nums.end());
	int length = 0;
	bool isstart = false;
	for (int i = 0; i < start_length; i++)
	{
		if (isstart == true && nums[i] != val)
		{
			break;
		}
		if (nums[i]==val)
		{
			nums[i] = nums[start_length-length-1];
			length++;
			isstart = true;
		}
		
	}

	for (int i = 0; i < length; i++)
	{
		nums.pop_back();
	}
	return start_length-length;
}
//int main() {
//	int arrar[] = { 0,1,2,2,3,0,4,2};
//	vector<int> v(arrar,arrar+8);
//	cout<<removeElement(v, 2)<<endl;
//	return 0;
//}