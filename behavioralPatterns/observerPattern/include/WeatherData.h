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
	void measurementsChanged();

	/**
	 * There is no class that will call measurementsChanged, so we will do it
	 * in main class.
	 */
	// It is better to write a setter for each measurement but for time ...
	void setMeasurements(const float temperature, const float humidity, 
		const float pressure);

	// ACCESSORS
	/**
	 * @returns Current temperature.
	 */
	float getTemperature() const;
	/**
	 * @returns Current humidity.
	 */
	float getHumidity() const;
	/**
	 * @returns Current pressure.
	 */
	float getPressure() const;

private:
	float mTemperature;
	float mHumidity;
	float mPressure;
	std::vector<Observer *> mObservers;
};

#define WEATHER_DATA_H
#endif // WEATHER_DATA_H