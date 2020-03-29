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
	vector<int> twoSum(vector<int>& numbers, int target); //167 ��������� Two Sum
	bool judgeSquareSum(int c);     //633 ����ƽ����
	string reverseVowels(string s); // 345 ��ת�ַ����е�Ԫ���ַ�
	

	bool validPalindrome(string s); //680 �����ַ���
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n); //88 �鲢������������
	// 141�ж������Ƿ���ڻ�
	//524 �������

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
