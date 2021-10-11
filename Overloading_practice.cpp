#include<iostream>
using namespace std;

double convertToMPH(int minutes,int seconds);
double convertToMPH(double kph);

int main() {
	int minute, second;
	double kph;
	int i = 0, j = 0;
	do {
		cout << "Enter minute and second"<<endl;
		cin >> minute >> second;
		if (second == 0) {
			cout << minute << ":00"   << " pace is " << convertToMPH(minute, second) << " MPH\n";
		}
		else {
			cout << minute << ":" << second << " pace is " << convertToMPH(minute, second) << " MPH\n";
		}
		i++;
	} while (i < 3);

	do {
		cout << "Enter KPH" << endl;
		cin >> kph;
		cout << kph << " kph is " << convertToMPH(kph)<<" MPH" << endl;
		j++;
	} while (j < 3);
}
double convertToMPH(int minutes, int seconds) {
	double hours = static_cast<double>(minutes) / 60 + static_cast<double>(seconds) / 3600;
	return 1 / hours;
}
double convertToMPH(double kph) {
	return kph / 1.61;
}