#include <iostream>
using namespace std;
class Rectangle {
private:
	int width, height;
public:
	Rectangle(int width, int height);
};
template <class T>
void selectionSort(T* a, const int n)
{
	for (int i = 0; i < n; i++) {
		int j = i;
		for (int k = i + 1; k < n; k++) {
			if (a[k] < a[j]) j = k;
		}
		swap(a[i], a[j]);
	}
}
template <class T>
void show(T* a,const int n) 
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	float y[] = { 1.03, 3.02,2.04,4.01,5.05 };
	int x[] = { 3,4,2,1,5 };
	show(x, 5);
	selectionSort(x, 5);
	selectionSort(y, 5);
	show(x, 5);
	show(y, 5);

}

Rectangle::Rectangle(int width, int height) : width(width), height(height)
{
}
