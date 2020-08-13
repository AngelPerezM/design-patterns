#ifndef MILK_H
#define MILK_H

/*******************************************************************************
* Milk.h
*
* Author: Ángel Pérez
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "CondimentDecorator.h"				// Superclass

/* Defines section
*******************************************************************************/

class Milk : public CondimentDecorator {
public:
	// CONSTRUCTOR
    /**
     *
     */
	Milk(Beverage *component);

    // DESTRUCTOR
    /**
     *
     */
	~Milk();

    // ACCESORS
    /**
     *
     */
	virtual std::string getDescription() override;
	/**
	 *
	 */
	virtual float cost() override;

};

#endif // MILK_H
