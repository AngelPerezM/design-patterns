#ifndef CURRENT_CONDITION_DISPLAY_H
#define CURRENT_CONDITION_DISPLAY_H

/*******************************************************************************
* CurrentConditionDisplay.h
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Observer.h"				// Implements Observer interface
#include "WeatherData.h"			// Observable (subject) object.

/* Defines section
*******************************************************************************/

class CurrentConditionDisplay : Observer {

public:
	// CONSTRUCTOR
	/**
	 * Constructor method, subscribe to the given observable object.
	 */
	CurrentConditionDisplay(WeatherData *weatherData);

	// DESTRUCTOR
	/**
	 * Destructor method.
	 */
	~CurrentConditionDisplay();

	// MANIPULATORS	
	/**
	 * @brief This is the interface used by the observable (subject) to notify
	 * its observers. The display will be reprinted (updated).
	 */
	virtual void update () override;

	// ACCESORS
	void display();

private:
	float mTemperature;
	float mHumidity;
	float mPressure;
	WeatherData *mWeatherData;
};

#endif // CURRENT_CONDITION_DISPLAY_H