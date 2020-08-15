#ifndef PIZZA_H
#define PIZZA_H

/*******************************************************************************
* pizzas/Pizza.h
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include <string>
#include <list>
#include "pizzas/ingredients/Dough.h"		// Dough.
#include "pizzas/ingredients/Sauce.h"		// Sauce.

/* Defines section
*******************************************************************************/

/**
 * Abstract class that defines the product to be created by the creators.
 * Also acts as a client from the abstract factory design pattern
 */
class Pizza {
public:
	// DESTRUCTOR
	/**
	 *
	 */
	virtual ~Pizza() {};

	// MANIPULATORS
	/**
	 *
	 */
	virtual void prepare() = 0;
	/**
	 *
	 */
	virtual void bake();
	/**
	 *
	 */
	virtual void cut();
	/**
	 *
	 */
	virtual void box();

	// ACCESORS
	/**
	 *
	 */
	std::string getName();

protected:
	// CONSTRUCTOR
	/**
	 *
	 */	
	Pizza();

	// MEMBERS
	std::string mName;

	// Productos constructed by the pizzaIngredientFactory:
	Dough *mDough;
	Sauce *mSauce;

};

#endif // PIZZA_H