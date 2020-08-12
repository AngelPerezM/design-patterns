/*******************************************************************************
* CurrentConditionDisplay.cpp
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "CurrentConditionDisplay.h"			// Class declaration
#include <iostream>

using std::cout;
using std::endl;

/* Defines section
*******************************************************************************/


/* Function definitions
*******************************************************************************/

CurrentConditionDisplay::CurrentConditionDisplay(WeatherData *weatherData) {
	mWeatherData = weatherData;
	mWeatherData->attach(this);
}

CurrentConditionDisplay::~CurrentConditionDisplay() {
	mWeatherData->detach(this);
}

void CurrentConditionDisplay::update () {
	mTemperature = mWeatherData->getTemperature();
	mHumidity = mWeatherData->getHumidity();
	mPressure = mWeatherData->getPressure();
	display();
}

void CurrentConditionDisplay::display() {
	cout << "══════CurrentConditionDisplay══════" << endl;
	cout << " Temperature: " << mTemperature << endl;
	cout << " Humidity: " << mHumidity << endl;
	cout << " Pressure: " << mPressure << endl;
	cout << "═══════════════════════════════════" << endl;
}