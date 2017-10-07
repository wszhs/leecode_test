// leecode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> v;
	for (int i = 0; i < nums.size() - 1; i++)
	{
		for (int j = i + 1; j< nums.size(); j++)
		{
			if (nums[i] + nums[j] == target)
			{
				v.push_back(i);
				v.push_back(j);
				return v;
			}

		}
	}
	return v;
}
//int main()
//{
//	cout << "start success" << endl;
//	int arrar[] = { 2,7,11,15 };
//	vector<int> v(arrar,arrar+4);
//	vector<int> out = twoSum(v, 9);
//	//for (auto c : v)  // 输出 vector 对象的内容以验证结果  
// //   cout << c << ' ';
//    return 0;
//}



