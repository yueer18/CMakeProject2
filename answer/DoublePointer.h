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
	vector<int> twoSum(vector<int>& numbers, int target); //167 ��������� Two Sum
	bool judgeSquareSum(int c);             //633 ����ƽ����



	string reverseVowels(string s); // 345 ��ת�ַ����е�Ԫ���ַ�
	
									//680 �����ַ���
	//88 �鲢������������
	// 141�ж������Ƿ���ڻ�
	//524 �������

	//
private:
	vector<int> nums;
	static int count;
	static string s;
};

#endif // !_DOUBLE_POINTER_H
