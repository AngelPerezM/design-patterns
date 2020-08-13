#ifndef BEVERAGE_H
#define BEVERAGE_H

/*******************************************************************************
* Beverage.h
*
* Author: Ángel Pérez
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include <string>

/* Defines section
*******************************************************************************/

/**
 * Abstract class that represents the component from the Decorator pattern.
 * Concrete types of coffess (i.e concrete components) will implement this 
 * interface.
 */
class Beverage {
public:
    // DESTRUCTOR
    /**
     *
     */
    virtual ~Beverage() {};

    // ACCESORS
    /**
     * @returns the beverage description.
     */
    virtual std::string getDescription();
    /**
     * @returns the cost of the beverage.
     */
    virtual float cost() = 0;

protected:
	// CONSTRUCTOR
	/**
     *
     */
	Beverage();
	/**
	 * Beverage description
	 */
	std::string description;
};

#endif // BEVERAGE_H