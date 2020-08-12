#ifndef WEATHER_DATA_H

/*******************************************************************************
* WeatherData.h
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Observable.h"			// Implements Observable interface.
#include <vector>

/* Defines section
*******************************************************************************/

class WeatherData : public Observable {

public:
	// CONSTRUCTOR
	WeatherData();

	// DESTRUCTOR
	~WeatherData();

	// MANIPULATORS
	/**
	 * @param observer Observer object to be attached.
	 */
	virtual void attach(Observer *observer) override;
	/**
	 * @param observer Observer object to be detached.
	 */
	virtual void detach(Observer *observer) override;
	/**
	 * @brief Notifies all observers when the "subject's" state changed.
	 */
	virtual void notify() override;

	/**
	 * @brief Method called whenever the weather measurements have been updated.
	 */
	void messurementsChanged();

	// It is better to write a setter for each measurement but for time ...
	void setMeasurements(float temperature, float humidity, float pressure);

	// ACCESSORS
	float getTemperature();
	float getHumidity();
	float getPressure();

private:
	float mTemperature;
	float mHumidity;
	float mPressure;
	std::vector<Observer *> mObservers;
};

#define WEATHER_DATA_H
#endif // WEATHER_DATA_H