#ifndef WEATHER_CHANGES_DISPLAY_H
#define WEATHER_CHANGES_DISPLAY_H

/*******************************************************************************
* WeatherChangesDisplay.h
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Observer.h"				// Implements Observer interface
#include "WeatherData.h"			// Observable (subject) object.
#include <string>

/* Defines section
*******************************************************************************/

class WeatherChangesDisplay : public Observer {

public:
	// CONSTRUCTOR
	/**
	 * Constructor method, subscribe to the given observable object.
	 */
	WeatherChangesDisplay(WeatherData *weatherData);

	// DESTRUCTOR
	~WeatherChangesDisplay();

	// MANIPULATORS	
	virtual void update () override;

	// ACCESORS
	void display();

private:

	float mOldTemperature;
	float mOldHumidity;
	float mOldPressure;

	float mTemperature;
	float mHumidity;
	float mPressure;

	WeatherData *mWeatherData;

	std::string produceChangeMessage(float oldValue, float currentValue);

};

#endif // WEATHER_CHANGES_DISPLAY_H