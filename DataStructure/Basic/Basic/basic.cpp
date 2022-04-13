# include <iostream>
#include <algorithm>
#include <numeric>


using namespace std;
int main()
{
	int a[] = { 1,2,3 };
	int result = accumulate(a, a + 3, 1,multiplies<int>());
	cout << result;
}