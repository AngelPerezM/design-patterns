#ifndef CHEESE_PIZZA_H
#define CHEESE_PIZZA_H

/*******************************************************************************
* pizzas/CheesePizza.h
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "pizzas/Pizza.h"
#include "pizzas/ingredientsFactory/PizzaIngredientFactory.h"

/* Defines section
*******************************************************************************/

class CheesePizza : public Pizza {
public:	
	// CONSTRUCTOR
	/**
	 *
	 */
	CheesePizza(PizzaIngredientFactory *izzaIngredientFactory);
	
	// DESTRUCTOR
	/**
	 *
	 */
	~CheesePizza();

	// MANIPULATORS
	virtual void prepare() override;

private:
	// MEMBERS
	/**
	 * abstract factory that creates the family of ingredients.
	 */
	PizzaIngredientFactory *mPizzaIngredientFactory;

};

#endif // CHEESE_PIZZA_H