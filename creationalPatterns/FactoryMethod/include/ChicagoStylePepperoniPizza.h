#ifndef CHICAGO_STYLE_PEPPERONI_PIZZA_H
#define CHICAGO_STYLE_PEPPERONI_PIZZA_H

/*******************************************************************************
* ChicagoStylePepperoniPizza.h
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

class ChicagoStylePepperoniPizza : public Pizza {
public:	
	// CONSTRUCTOR
	/**
	 *
	 */
	ChicagoStylePepperoniPizza();
	
	// DESTRUCTOR
	/**
	 *
	 */
	~ChicagoStylePepperoniPizza();
	// MANIPULATORS
	/**
	 *
	 */
	virtual void cut() override;

};

#endif // CHICAGO_STYLE_PEPPERONI_PIZZA_H