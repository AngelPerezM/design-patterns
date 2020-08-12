/*******************************************************************************
* CurrentConditionDisplay.cpp
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "WeatherChangesDisplay.h"			// Class declaration
#include <iostream>
#include <cstdlib>							// For absolute value

using std::cout;
using std::endl;

/* Defines section
*******************************************************************************/


/* Function definitions
*******************************************************************************/

WeatherChangesDisplay::WeatherChangesDisplay(WeatherData *weatherData) {
	mWeatherData = weatherData;
	mWeatherData->attach(this);
}

WeatherChangesDisplay::~WeatherChangesDisplay() {
	mWeatherData->detach(this);
}

void WeatherChangesDisplay::update () {
	mOldTemperature = mTemperature;
	mOldHumidity = mOldHumidity;
	mOldPressure = mOldPressure;

	mTemperature = mWeatherData->getTemperature();
	mHumidity = mWeatherData->getHumidity();
	mPressure = mWeatherData->getPressure();
	display();
}

void WeatherChangesDisplay::display() {
	cout << "───────WeatherChangesDisplay───────" << endl;
	cout << " Temperature " << produceChangeMessage(mOldTemperature, mTemperature) << endl;
	cout << " Humidity " << produceChangeMessage(mOldHumidity, mHumidity) << endl;
	cout << " Pressure " << produceChangeMessage(mOldPressure, mPressure) <<  endl;
	cout << "───────────────────────────────────" << endl;
}

std::string WeatherChangesDisplay::produceChangeMessage(float oldValue, float currentValue) {
	std::string variationMessage;
	float dif = currentValue - oldValue;	

	if(dif > 0) {
		variationMessage = "increases " + std::to_string(std::abs(dif));
	} else if (dif < 0) {
		variationMessage = "decreases " + std::to_string(std::abs(dif));
	} else {
		variationMessage = "does not change.";
	}
	return variationMessage;
}
