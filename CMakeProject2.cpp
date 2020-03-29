// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject2.h"
#include <iomanip>
#include <vector>
#include <iostream>
using namespace std;

#if 0
class SavingsAccount {
private:
	int id;        //账户
	double balance; //余额
	double rate;     //存款的年利率
	int lastDate;    //最后更新日期
	double accumlation; //余额日累加和

	//记录一笔账，data为日期，amount为金额，desc为说明
	void record(int data, double amount);
	//获得指定日期为止的存款金额按日累计值
	double accumulate(int data) const {
		return accumlation + balance * (data - lastDate);
	}
public:
	//构造函数
	SavingsAccount(int data, int id, double rate);
	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }

	//存
	void deposit(int data, double amount);
	//取
	void withdraw(int date, double amount);
	//节算利息
	void settle(int date);
	//显示
	void show();
};

SavingsAccount::SavingsAccount(int date, int id, double rate)
	:id(id), balance(0), rate(rate), lastDate(date), accumlation(0) {
	cout << date << "\t#" << id << "is create" << endl;
}
void SavingsAccount::record(int date, double amount) {

}

void SavingsAccount::record(int date, double amount) {

}
#endif


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

int main()
{
//	test_167();
	test_345();
//	test_633();

	return 0;
}
 