#ifndef N_Y_STYLE_PEPPERONI_PIZZA_H
#define N_Y_STYLE_PEPPERONI_PIZZA_H

/*******************************************************************************
* NYStylePepperoniPizza.h
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

class NYStylePepperoniPizza : public Pizza {
public:	
	// CONSTRUCTOR
	/**
	 *
	 */
	NYStylePepperoniPizza();

	// DESTRUCTOR
	/**
	 *
	 */
	~NYStylePepperoniPizza();

	// MANIPULATORS
	/**
	 *
	 */
	virtual void cut() override;
};

#endif // N_Y_STYLE_PEPPERONI_PIZZA_H