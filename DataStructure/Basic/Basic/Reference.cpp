#include <iostream>
using namespace std;
/* 1.call by value
*  2.call by address
*  3.call by reference -> swap �̿�
*/
void swap(int& x, int& y);
int main()
{
	int a = 5, c = 8;
	// a�� ���� �ּҸ� ����Ű�� b��� �ٸ� �̸� ���� 
	// �����Ϳ� �ٸ� ���� �����ʹ� �ּҸ� ��� ���ο� ������� 
	// �����ڴ� �޸� ������ ���Ӱ� �־����� �ʰ� ���� �޸� ������ �̸��� �߰��� ���̴�.
	int& b = a;
	b = 10;
	cout << a << " " << c << endl;
	swap(a, c);
	cout << a << " " << c;
}
// swap(a,b) �� �ϰ� �Ǹ�
// x�� �� a�� �ǹ�, y�� �� b�� �ǹ�
void swap(int& x, int& y) {
	int temp;
	temp = x; // �޸� ������ �̸��� �þ ���̹Ƿ� int temp�� ���� ����
	x = y;
	y = temp;
}