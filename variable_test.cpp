#include <iostream>
using namespace std;
int k;
int main()
{
	int a = 0;
	cout << a << endl;
	int b = a = 99;  //连等赋相同值，并且a要先申明
	cout << a <<endl;
	cout << b <<endl;
	int c;
	cout << c <<endl;//函数内没有赋值的变量不一定为0
	cout << k << endl;  //函数外会初始化为0
	int e;
	int f = e = -99;
	cout << e << endl;
	cout << f << endl;
}
