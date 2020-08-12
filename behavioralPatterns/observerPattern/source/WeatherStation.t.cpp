
/* Include section
*******************************************************************************/
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "WeatherChangesDisplay.h"
#include <iostream>
#include <unistd.h>						// For rand function.

using std::cout;
using std::cin;
using std::endl;

/* Defines section
*******************************************************************************/
#define RANDOM_LIMITS(LO, HI)	( (LO) + static_cast <float> (rand()) / (static_cast <float> ((RAND_MAX)/((HI)-(LO)))) )

/* Function definitions
*******************************************************************************/
int main () {
	WeatherData *weatherData = new WeatherData();
	CurrentConditionDisplay *currentConditionDisplay = new CurrentConditionDisplay(weatherData);	
	WeatherChangesDisplay *weatherChangesDisplay = new WeatherChangesDisplay(weatherData);

	float temperature;
	float pressure;
	float humidity;
	int i = 0;
	while(i++ < 5){
		temperature = RANDOM_LIMITS(0, 40);
		pressure = RANDOM_LIMITS(500, 4000);
		humidity = RANDOM_LIMITS(0, 100);

		weatherData->setMeasurements(temperature, humidity, pressure);		
		sleep(3);
	}
	delete currentConditionDisplay;
	delete weatherChangesDisplay;
	delete weatherData;		
	return 0;
}