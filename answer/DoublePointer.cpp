#include "DoublePointer.h"
#include <iostream>
using namespace std;

int Answer::count = 0;

Answer::Answer(vector<int>& n)
{
	nums = n;
	count = nums.size();
}

void Answer::show()
{
	for (int i = 0; i < count; i++) {
		cout << nums[i] << "\t";
	}
	cout << endl;
}


/*167
Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2

题目描述：在有序数组中找出两个数，使它们的和为 target。
说明:
	返回的下标值（index1 和 index2）不是从零开始的。
	你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。

使用双指针，一个指针指向值较小的元素，一个指针指向值较大的元素。
指向较小元素的指针从头向尾遍历，指向较大元素的指针从尾向头遍历。

	如果两个指针指向元素的和 sum == target，那么得到要求的结果；
	如果 sum > target，移动较大的元素，使 sum 变小一些；
	如果 sum < target，移动较小的元素，使 sum 变大一些。
数组中的元素最多遍历一次，时间复杂度为 O(N)。只使用了两个额外变量，空间复杂度为 O(1)。

*/
vector<int> Answer::twoSum(vector<int> &numbers, int target)
{
	if (numbers.size() == 0) return {-1,-1};
	int i = 0, j = numbers.size()-1;
	while (i < j) {
		int sum = numbers[i] + numbers[j];
		if (sum == target) {
			return {i+1, j+1};
		} else if(sum > target) {
			j--;
		} else {                                                                          
			i++;
		}	
	}

	return vector<int>();
}

/*
Input: 5
Output: True
Explanation: 1 * 1 + 2 * 2 = 5

题目描述：判断一个非负整数是否为两个整数的平方和。

可以看成是在元素为 0~target 的有序数组中查找两个数，
使得这两个数的平方和为 target，如果能找到，则返回 true，表示 target 是两个整数的平方和。

本题和 167. Two Sum II - Input array is sorted 类似，只有一个明显区别：
一个是和为 target，一个是平方和为 target。本题同样可以使用双指针得到两个数，使其平方和为 target。

本题的关键是右指针的初始化，实现剪枝，从而降低时间复杂度。设右指针为 x，左指针固定为 0，
为了使 02 + x2 的值尽可能接近 target，我们可以将 x 取为 sqrt(target)。

因为最多只需要遍历一次 0~sqrt(target)，所以时间复杂度为 O(sqrt(target))。
又因为只使用了两个额外的变量，因此空间复杂度为 O(1)
*/
bool Answer::judgeSquareSum(int c)
{
	if (c <= 0) return false;
	long left = 0;
	long right = (long)sqrt(c);
	while (left <= right)
	{
		long sum = left * left + right * right;
		if (sum == c)
			return true;
		else if (sum > c)
			right--;
		else
			left++;
	}
	return false;
}
