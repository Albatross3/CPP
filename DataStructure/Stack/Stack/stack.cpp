#include <iostream>
using namespace std;
void swapValues(int& variable1, int& variable2);
int main()
{
	int a = 5, b = 6;
	swapValues(a, b);
	cout << a << " " << b;
}
void swapValues(int& variable1, int& variable2) {
	int temp = variable1; // address ���� temp�� �����
	variable1 = variable2;
	variable2 = temp;
}