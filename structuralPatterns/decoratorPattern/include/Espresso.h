#ifndef ESPRESSO_H
#define ESPRESSO_H

/*******************************************************************************
* Espresso.h
*
* Author: Ángel Pérez
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Beverage.h"			// Base class

/* Defines section
*******************************************************************************/

class Espresso : public Beverage {
public:
    // CONSTRUCTOR
    /**
     *
     */
	Espresso();

    // DESTRUCTOR
    /**
     *
     */
	~Espresso();

    // ACCESORS
	/**
     *
     */
	virtual float cost() override;

};

#endif // ESPRESSO_H