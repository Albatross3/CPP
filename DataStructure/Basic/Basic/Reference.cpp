#include <iostream>
using namespace std;
/* 1.call by value
*  2.call by address
*  3.call by reference -> swap 이용
*/
void swap(int& x, int& y);
int main()
{
	int a = 5, c = 8;
	// a와 같은 주소를 가리키는 b라는 다른 이름 생성 
	// 포인터와 다른 점은 포인터는 주소를 담는 새로운 변수라면 
	// 참조자는 메모리 공간이 새롭게 주어지지 않고 기존 메모리 공간에 이름이 추가될 뿐이다.
	int& b = a;
	b = 10;
	cout << a << " " << c << endl;
	swap(a, c);
	cout << a << " " << c;
}
// swap(a,b) 를 하게 되면
// x가 곧 a를 의미, y가 곧 b를 의미
void swap(int& x, int& y) {
	int temp;
	temp = x; // 메모리 공간의 이름만 늘어난 것이므로 int temp에 저장 가능
	x = y;
	y = temp;
}