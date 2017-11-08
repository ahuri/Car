#include "Car.h"


Car::Car()
{
}

Car::~Car()
{
}

string Car::GetManufacturer()
{
	return m_manufacturer;
}

string Car::GetModel()
{
	return m_model;
}

int Car::GetYear()
{
	return m_year;
}

int Car::GetEngineVolume()
{
	return m_engineVolume;
}

char* const Car::GetColor()
{
	return m_color;
}

void Car::SetManufacturer(string manufacturer)
{
	m_manufacturer = manufacturer;
}

void Car::SetModel(string model)
{
	m_model = model;
}

void Car::SetYear(int year)
{
	if (year > CURRENT_YEAR)
		m_year = CURRENT_YEAR;
	else
		m_year = year;
}

void Car::SetEngineVolume(int engineVolume)
{
	if (engineVolume < 0)
		engineVolume = 0;
	else
		m_engineVolume = engineVolume;
}

void Car::SetColor(const char * color)
{
	strncpy(m_color, color, 9);
	m_color[9] = '\0';
}

void Car::PrintDetails()
{
	cout << "Manufacturer: " << GetManufacturer().c_str() << endl;
	cout << "Model: " << GetModel().c_str() << endl;
	cout << "Year: " << GetYear() << endl;
	cout << "Engine volume: " << GetEngineVolume() << endl;
	cout << "Color: " << GetColor() << endl;
}

Car Car::CompareYear(Car c1, Car c2)
{
	if (c1.GetYear() < c2.GetYear())
		return c2;
	return c1;
}

Car Car::CompareEngineVolume(Car c1, Car c2)
{
	if (c1.GetEngineVolume() < c2.GetEngineVolume())
		return c2;
	return c1;;
}
