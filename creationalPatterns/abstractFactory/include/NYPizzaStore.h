#ifndef NY_PIZZA_STORE_H
#define NY_PIZZA_STORE_H

/*******************************************************************************
* NYPizzaStore.h
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

class NYPizzaStore : public PizzaStore {
public:	
	// CONSTRUCTOR
	/**
	 *
	 */
	NYPizzaStore();

	// DESTRUCTOR
	/**
	 *
	 */
	~NYPizzaStore();

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

#endif // NY_PIZZA_STORE_H