#ifndef _DOUBLE_POINTER_H
#define _DOUBLE_POINTER_H
#include <vector>
#include <list>
#include <cmath>
#include <string>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Answer {
public:
	Answer(vector<int>& nums);
	void show();

	//double pointer:https://github.com/CyC2018/CS-Notes
	vector<int> twoSum(vector<int>& numbers, int target); //167 有序数组的 Two Sum
	bool judgeSquareSum(int c);     //633 两数平方和
	string reverseVowels(string s); // 345 反转字符串中的元音字符
	

	bool validPalindrome(string s); //680 回文字符串
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n); //88 归并两个有序数组
	bool hasCycle(ListNode* head); // 141判断链表是否存在环
	string findLongestWord(string s, vector<string>& d); //524 最长子序列

	//
private:
	bool isPalindrome(string s, int i, int j) {  //680
		while (i < j) {
			if (s[i++] != s[j--]) {
				return false;
			}
		}
		return true;
	}

	bool SubString(string s, string target) {
		int i = 0, j = 0;
		while (i < s.length() && j < target.length()) {
			//相同两个指针都后移一位
			if (s[i] == target[j]) {
				j++;
			}
			//如果不相同，删除相当于s后移一位指针
			i++;
		}
		if (j == target.length()) {
			return true;
		}
		return false;
	}

	vector<int> nums;
	static int count;
	static string s;
};

#endif // !_DOUBLE_POINTER_H
