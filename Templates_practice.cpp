#include <iostream>
using namespace std;

template<class T>
T showDiff(T var1, T var2);


int main()
{
	cout << "Absolute value of (20-50) is " << showDiff(20, 50) << endl;
	cout << "Absolute value of (7.23-4.15) is " << showDiff(7.23, 4.15) << endl;


}
template<class T>
T showDiff(T var1, T var2)
{
	T diff = var1 - var2;
	if (diff < 0) 
		return -diff;
	else 
		return diff;
}
