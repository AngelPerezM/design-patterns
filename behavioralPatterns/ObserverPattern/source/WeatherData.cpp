/*******************************************************************************
* WeatherData.cpp
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "WeatherData.h"			// Class declaration
#include <iostream>
#include <algorithm>				// for std::remove

/* Defines section
*******************************************************************************/

WeatherData::WeatherData () {
	mTemperature = 0;
	mHumidity = 0;
	mPressure = 0;
}

WeatherData::~WeatherData () {
}

void WeatherData::attach(Observer *observer) {
	mObservers.push_back(observer);
}

void WeatherData::detach(Observer *observer) {
	mObservers.erase(std::remove(mObservers.begin(), mObservers.end(), observer), mObservers.end());
}

void WeatherData::notify() {
	for(std::vector<Observer *>::iterator it = mObservers.begin();
		it < mObservers.end();
		++it) {
		(*it)->update();
	}
}