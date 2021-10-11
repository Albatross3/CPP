#include <iostream>
using namespace std;

double hat_size(double, double);
double jacket_size(double, double, int);
double waist(double, int);

int main()
{	
	int height, weight, age;
	char ans;
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	do {
		cout << "Give me your height in inches, weight in pounds, and age in years" << endl;
		cout << "and I will give you your hat size, jacket size(inches at chest)" << endl;
		cout << "and yout waist size in inches.\n";
		cin >> height >> weight >> age;
		cout << "hat size = " << hat_size(height, weight)<<endl;
		cout << "jacket size = " << jacket_size(height, weight,age)<<endl;
		cout << "waist size = " << waist(weight, age) << endl;
		cout << "\n";
		cout << "enter Y or y to repeat,any other character ends.\n";
		cin >> ans;
		
	} while (ans == 'Y' || ans == 'y');
}
double hat_size(double height, double weight) {
	return weight / height * 2.9;
}
double jacket_size(double height, double weight, int age) {
	return height * weight / 288 + (1 / 8) * ((age - 30) / 10);
}
double waist(double weight, int age) {
	return weight / 5.7 + (1 / 10) * ((age - 28) / 2);
}
 