#ifndef CHICAGO_STYLE_CHEESE_PIZZA_H
#define CHICAGO_STYLE_CHEESE_PIZZA_H

/*******************************************************************************
* ChicagoStyleCheesePizza.h
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Pizza.h"

/* Defines section
*******************************************************************************/

class ChicagoStyleCheesePizza : public Pizza {
public:	
	// CONSTRUCTOR
	/**
	 *
	 */
	ChicagoStyleCheesePizza();
	
	// DESTRUCTOR
	/**
	 *
	 */
	~ChicagoStyleCheesePizza();

	// MANIPULATORS
	/**
	 *
	 */
	virtual void cut() override;

};

#endif // CHICAGO_STYLE_CHEESE_PIZZA_H