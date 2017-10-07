#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

ListNode *creatList(int *a,int n) {
	ListNode head(-1);
	ListNode *prev = &head;
	ListNode *prev2;
	prev2 = &head;

	for (int i=0;i<n;i++)
	{
		prev->next = new ListNode(a[i]);
		prev = prev->next;
	}
	prev->next = NULL;
	return head.next;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode head =ListNode(-1);
	ListNode *front = &head;
	int start_number = 0;
	int front_number = 0;
	int back_number = 0;
	int l1_number = 0;
	int l2_number = 0;
	ListNode *l1_node=l1, *l2_node=l2;

	while (1)
	{
		start_number = l1_number + l2_number+back_number;
		front_number = start_number % 10;
		front->next = new ListNode(front_number);
		back_number = start_number / 10;
		front = front->next;
		if (l1_node == NULL&&l2_node == NULL)
		{
			break;
		}
		l1_number = 0;
		l2_number = 0;
		if (l1_node != NULL)
		{
			l1_number = l1_node->val;
			l1_node = l1_node->next;
		}
		if (l2_node != NULL)
		{
			l2_number = l2_node->val;
			l2_node = l2_node->next;
		}
	}
	if (back_number!=0)
	{
		front->next = new ListNode(back_number);
	}
	return head.next->next;
}

//int main()
//{
//	int a[] = {3,1};
//	int b[] = { 9 };
//	ListNode *l1 = creatList(a, 2);
//	ListNode *l2 = creatList(b,1);
//	ListNode *l3 = addTwoNumbers(l1, l2);
//	cout << "start success " << endl;
//	return 0;
//}