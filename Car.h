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

	string GetManufacturer();
	string GetModel();
	int GetYear();
	int GetEngineVolume();
	char* const GetColor();

	void SetManufacturer(string manufacturer);
	void SetModel(string model);
	void SetYear(int year);
	void SetEngineVolume(int engineVolume);
	void SetColor(const char* color);

	void PrintDetails();

	Car CompareYear(Car c1, Car c2);
	Car CompareEngineVolume(Car c1, Car c2);

};

