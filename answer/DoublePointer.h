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
	vector<int> twoSum(vector<int>& numbers, int target); //167 ��������� Two Sum
	bool judgeSquareSum(int c);     //633 ����ƽ����
	string reverseVowels(string s); // 345 ��ת�ַ����е�Ԫ���ַ�
	

	bool validPalindrome(string s); //680 �����ַ���
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n); //88 �鲢������������
	bool hasCycle(ListNode* head); // 141�ж������Ƿ���ڻ�
	string findLongestWord(string s, vector<string>& d); //524 �������

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
			//��ͬ����ָ�붼����һλ
			if (s[i] == target[j]) {
				j++;
			}
			//�������ͬ��ɾ���൱��s����һλָ��
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
