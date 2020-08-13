#ifndef DECAF_H
#define DECAF_H

/*******************************************************************************
* Decaf.h
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

class Decaf : public Beverage {
public:
    // CONSTRUCTOR
    /**
     *
     */
	Decaf();

    // DESTRUCTOR
    /**
     *
     */
	~Decaf();

    // ACCESORS
	/**
     *
     */
	virtual float cost() override;

};

#endif // DECAF_H