#ifndef _DOUBLE_POINTER_H
#define _DOUBLE_POINTER_H
#include <vector>
#include <list>
#include <cmath>
#include <string>
using namespace std;


class Answer {
public:
	Answer(vector<int>& nums);
	void show();

	//double pointer:https://github.com/CyC2018/CS-Notes/blob/master/notes/Leetcode%20%E9%A2%98%E8%A7%A3%20-%20%E5%8F%8C%E6%8C%87%E9%92%88.md
	vector<int> twoSum(vector<int>& numbers, int target); //167 有序数组的 Two Sum
	bool judgeSquareSum(int c);     //633 两数平方和
	string reverseVowels(string s); // 345 反转字符串中的元音字符
	

	bool validPalindrome(string s); //680 回文字符串
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n); //88 归并两个有序数组
	// 141判断链表是否存在环
	//524 最长子序列

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
	vector<int> nums;
	static int count;
	static string s;
};

#endif // !_DOUBLE_POINTER_H
