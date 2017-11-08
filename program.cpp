#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

void main()
{
	Car mycar;
	string input;
	cout << "Insert car's manufacturer: ";
	cin >> input;
	mycar.SetManufacturer(input);

	cout << "Insert car's model: ";
	cin >> input;
	mycar.SetModel(input);

	cout << "Insert car's year: ";
	cin >> input;
	mycar.SetYear(stoi(input));

	cout << "Insert car's engine volume (in cc): ";
	cin >> input;
	mycar.SetEngineVolume(stoi(input));

	cout << "Insert car's color: ";
	cin >> input;
	mycar.SetColor(input.c_str());

	mycar.PrintDetails();

}
