#include <iostream>
using namespace std;

class Temperature {
public:
	void setTempKelvin(double newKelvin);
	void setTempFahrenheit(double newFahrenheit);
	void setTempCelsius(double newCelsius);

	double getTempKelvin();
	double getTempFahrenheit();
	double getTempCelsius();
private:
	double kelvin;
	double fahrenheit;
	double celsius;
};

int main()
{
	Temperature temperature1,temperature2,temperature3;
	temperature1.setTempFahrenheit(7);
	cout << "In Celsius: " << temperature1.getTempCelsius() <<endl;
	cout << "In Fahrenheit: " << temperature1.getTempFahrenheit() << endl;
	cout << "In Kelvin: " << temperature1.getTempKelvin() << endl;
	cout << endl;

	temperature2.setTempCelsius(723);
	cout << "In Celsius: " << temperature2.getTempCelsius() << endl;
	cout << "In Fahrenheit: " << temperature2.getTempFahrenheit() << endl;
	cout << "In Kelvin: " << temperature2.getTempKelvin() << endl;
	cout << endl;

	temperature3.setTempKelvin(23);
	cout << "In Celsius: " << temperature3.getTempCelsius() << endl;
	cout << "In Fahrenheit: " << temperature3.getTempFahrenheit() << endl;
	cout << "In Kelvin: " << temperature3.getTempKelvin() << endl;
	cout << endl;
	

}
void Temperature::setTempKelvin(double newKelvin) {
	kelvin = newKelvin;
	celsius = kelvin - 273.15;
	fahrenheit = (9.0 / 5) * celsius + 32;
}
void Temperature::setTempFahrenheit(double newFahrenheit) {
	fahrenheit = newFahrenheit;
	celsius = (5.0 / 9) * (fahrenheit - 32);
	kelvin = celsius + 273.15;
}
void Temperature::setTempCelsius(double newCelsius) {
	celsius = newCelsius;
	fahrenheit = (9.0 / 5) * celsius + 32;
	kelvin = celsius + 273.15;
}
double Temperature::getTempKelvin() {
	return kelvin;
}
double Temperature::getTempFahrenheit() {
	return fahrenheit;
}
double Temperature::getTempCelsius() {
	return celsius;
}
