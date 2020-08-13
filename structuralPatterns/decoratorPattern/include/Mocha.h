#ifndef MOCHA_H
#define MOCHA_H

/*******************************************************************************
* Mocha.h
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

class Mocha : public CondimentDecorator {
public:
	// CONSTRUCTOR
    /**
     *
     */
	Mocha(Beverage *component);

    // DESTRUCTOR
    /**
     *
     */
	~Mocha();

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

#endif // MOCHA_H
