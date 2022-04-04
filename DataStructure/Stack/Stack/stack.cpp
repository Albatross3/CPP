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
	int temp = variable1; // address 값이 temp에 저장됨
	variable1 = variable2;
	variable2 = temp;
}