#include <iostream>
#include<string>
using namespace std;
double degree_celsius_fahrenheit(double celsius) {
	return 1.8*celsius + 32;
}
double degree_celsius_kelvin(double celsius) {
	return  celsius + 273.15;
}
double fahrenheit1_celsius(double fahrenheit) {
	return 1.8 / fahrenheit - 32;
}
double fahrenheit1_kelvin(double fahrenheit) {
	return 1.8*fahrenheit + 459.67;
}
double _kelvin22_celsius(double kelvin) {
	return kelvin - 273.15;
}
double _kelvin_fahrenheit(double kelvin) {
	return  1.8 / kelvin - 459.67;
}
int main()
{
	double temperation;
	char metrics;
	cout << "Enter your temperation" << endl;
	cin >> temperation;
	cout << "Enter your metrics(C OR F or K  )" << endl;
	cin >> metrics;
	
	switch (metrics) {
	case 'c':
	case'C':
		cout << "degree fahrenheit is" << degree_celsius_fahrenheit(temperation) << "%" << endl;
		cout << "degree kelvin is" << degree_celsius_kelvin(temperation) << "%" << endl;
		break;
	case'f':
	case'F':
		cout << "degree celsius is" << fahrenheit1_celsius(temperation) << "%" << endl;
		cout << "degree kelvin is" << fahrenheit1_kelvin(temperation) << "%" << endl;
		break;
	case'k':
	case'K':
		cout << "degree celsius is" << _kelvin22_celsius(temperation) << "%" << endl;
		cout << "degree fahrenheit is" << _kelvin_fahrenheit(temperation) << "%" << endl;
		break;
	default:
		cout << "ERROR" << endl;
		break;

	}
}