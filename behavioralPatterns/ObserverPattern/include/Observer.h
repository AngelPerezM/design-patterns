#ifndef OBSERVER_H
#define OBSERVER_H

/*******************************************************************************
* Observer.h
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/

/* Defines section
*******************************************************************************/

/**
 * Defines the "observer" interface from the Observer design pattern.
 */
class Observer {

public:
	// DESTRUCTOR
	/**
	 * @brief Destructor class.
	 * This class deletes/de-allocates reserved memory.
	 */
	virtual ~Observer() {};

	// MANIPULATORS
	/**
	 * @brief This is the interface used by the observable (subject) to notify
	 * its observers.
	 */
	virtual void update() = 0;

};

#endif // OBSERVER_H