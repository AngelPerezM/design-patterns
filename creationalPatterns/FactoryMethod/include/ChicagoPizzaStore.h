#ifndef CHICAGO_PIZZA_STORE_H
#define CHICAGO_PIZZA_STORE_H

/*******************************************************************************
* ChicagoPizzaStore.h
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "PizzaStore.h"		// Superclass.

/* Defines section
*******************************************************************************/

class ChicagoPizzaStore : public PizzaStore {
public:	
	// CONSTRUCTOR
	/**
	 *
	 */
	ChicagoPizzaStore();

	// DESTRUCTOR
	/**
	 *
	 */
	~ChicagoPizzaStore();

	// MANIPULATORS
	/**
	 *
	 */
	virtual Pizza * createPizza(std::string type) override;

	// ACCESORS
	/**
	 *
	 */

};

#endif // CHICAGO_PIZZA_STORE_H