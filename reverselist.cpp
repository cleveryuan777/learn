#include <iostream>
#include <random>
using namespace std;

struct ListNode
{
	int val;
	struct ListNode* next;
	ListNode(int x)
		:
		val(x), next(nullptr)
	{
	}
};

ListNode* ReverseList(ListNode* pHead)
{
	ListNode* pre = nullptr;
	ListNode* cur = pHead;
	ListNode* nex = nullptr; // 这里可以指向nullptr，循环里面要重新指向
	while (cur)
	{
		nex = cur->next;
		cur->next = pre;
		pre = cur;
		cur = nex;
	}
	return pre;
}

ListNode* init(int n)
{
	mt19937 Rnd(random_device{}());    //随机数生成器
	uniform_int_distribution<int> dist(0, 100);    //定义dist1为0——100的随机整数
	auto* head = new ListNode(dist(Rnd));
	ListNode* pre = head;
	for (int i = 0; i < n - 1; i++)
	{
		pre->next = new ListNode(dist(Rnd));
		pre = pre->next;
	}

	return head;
}



int main()
{
	ListNode* head = init(5);
	ListNode* cur = head;
	while (cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	cout << endl;
	ListNode* new_head = ReverseList(head);
	cur = new_head;
	while (cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}

	return 0;

}