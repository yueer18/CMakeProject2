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

	//double pointer
	vector<int> twoSum(vector<int>& numbers, int target); //167 有序数组的 Two Sum
	bool judgeSquareSum(int c);             //633 两数平方和



	string reverseVowels(string s); // 345 反转字符串中的元音字符
	
									//680 回文字符串
	//88 归并两个有序数组
	// 141判断链表是否存在环
	//524 最长子序列

	//
private:
	vector<int> nums;
	static int count;
	static string s;
};

#endif // !_DOUBLE_POINTER_H
