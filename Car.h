#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

#define CURRENT_YEAR 2018

class Car
{
private:
	string m_manufacturer;
	string m_model;
	int m_year;
	int m_engineVolume;
	char m_color[10];
public:
	Car();
	~Car();
	Car(const Car &c) :
		m_manufacturer(c.GetManufacturer()),
		m_model(c.GetModel()),
		m_year(c.GetYear()),
		m_engineVolume(c.GetEngineVolume()) {};

	string GetManufacturer() const;
	string GetModel() const;
	int GetYear() const;
	int GetEngineVolume() const;
	const char* GetColor() const;

	void SetManufacturer(string manufacturer);
	void SetModel(string model);
	void SetYear(int year);
	void SetEngineVolume(int engineVolume);
	void SetColor(const char* color);

	void PrintDetails();

	Car CompareYear(Car c1, Car c2);
	Car CompareEngineVolume(Car c1, Car c2);

};
