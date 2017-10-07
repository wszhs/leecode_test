#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
	if (nums.size()<2)
	{
		return nums.size();
	}
	vector<int>::iterator current = nums.begin();
	vector<int>::iterator next = nums.begin()+1;
	while (next != nums.end())
	{
		if (*next==*current)
		{
			current = nums.erase(current);
			next = current + 1;
		}
		else
		{
			current++;
			next++;
		}

	} 

	return nums.size();
}
//int main() {
//	int arrar[] = {1};
//	vector<int> v(arrar,arrar+1);
//	cout << "start success" << endl;
//	cout << removeDuplicates(v) << endl;
//	return 0;
//}