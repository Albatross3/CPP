#include <iostream>
#include <String>

using namespace std;
int main()
{	
	int n;
	double r, lastGuess;
	cout << "Enter a number: ";
	cin >> n;
	double currentGuess = n / 2;
	while (1) {
		r = n / currentGuess;
		lastGuess = (currentGuess + r) / 2;
		cout << "Loop"<<endl;
		if ((currentGuess - lastGuess) / currentGuess < 0.01) break;
		currentGuess = lastGuess;
	}
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cout << "The square root of  17101967.00 is approximately " << lastGuess;
	return 0;
}
 