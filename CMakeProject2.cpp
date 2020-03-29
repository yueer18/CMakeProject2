// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject2.h"
#include <iomanip>
#include <vector>
#include <iostream>
using namespace std;

void test_167()
{
	vector<int> arr = { 1,2,3,4,6,55 };
	Answer A(arr);

	A.show();
	for (auto e : A.twoSum(arr, 5)) {
		cout << e << endl;
	}
}

void test_633() 
{
	Answer A(vector<int>{});
	cout << A.judgeSquareSum(4) << endl;
}

void test_345() 
{
	Answer A(vector<int>{});
	cout << A.reverseVowels("leetcode") << endl;
}

void test_680()
{
	Answer A(vector<int>{});
	cout << A.validPalindrome("leetcode") << endl;
}
void test_88()
{
	vector<int> nums1 = { 1,2,3,0,0,0};
	vector<int> nums2 = { 2,5,6};
	Answer A(vector<int>{});
	A.merge(nums1, 3, nums2, 3);
}

void test_141()
{
	//
}

void test_524()
{
	string s = "abpcplea";
	vector<string> target = { "ale","apple","monkey","plea" };

	Answer A(vector<int>{});
	string a = A.findLongestWord(s, target);
	cout << a << endl;
}

int main()
{
//	test_88();
//	test_141();
//	test_167();
//	test_345();
	test_524();
//	test_633();
//	test_680();

	return 0;
}
 