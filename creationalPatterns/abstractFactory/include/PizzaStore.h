#ifndef PIZZA_STORE_H
#define PIZZA_STORE_H

/*******************************************************************************
* PizzaStore.h
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include <string>
#include "pizzas/Pizza.h"					// for createPizza method.

/* Defines section
*******************************************************************************/

/**
 * Abstract Creator that defines an abastract factory method.
 */
class PizzaStore {
public:
    // DESTRUCTOR
    /**
     * Desctructor method.
     */
	virtual ~PizzaStore() {};

    // MANIPULATORS
    /**
     * parameterized factory method. Creates a concrete pizza given a type.
     */
	virtual Pizza * createPizza(std::string type) = 0;
	/**
	 * Creates a pizza given the type and realizes operations over it.
	 */
	virtual Pizza * orderPizza(std::string type);

    // ACCESORS
    /**
     *
     */

protected:
	// CONSTRUCTOR
	/**
	 *
	 */
	PizzaStore();

};

#endif // PIZZA_STORE_H