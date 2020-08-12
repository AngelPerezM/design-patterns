#ifndef OBSERVABLE_H
#define OBSERVABLE_H

/*******************************************************************************
* Observable.h
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Observer.h"		// Observer objects.

/* Defines section
*******************************************************************************/

/**
 * Defines the "subject" interface from the Observer design pattern.
 */
class Observable {

public:
	// DESTRUCTOR
	/**
	 * @brief Destructor class.
	 * This class deletes/de-allocates reserved memory.
	 */
	virtual ~Observable() {};

	// MANIPULATORS
	/**
	 * @param observer Observer object to be attached.
	 */
	virtual void attach(Observer *observer) = 0;
	/**
	 * @param observer Observer object to be detached.
	 */
	virtual void detach(Observer *observer) = 0;
	/**
	 * @brief Notifies all observers when the "subject's" state changed.
	 */
	virtual void notify() = 0;

};

#endif // OBSERVABLE_H