#ifndef PEPPERONI_PIZZA_H
#define PEPPERONI_PIZZA_H

/*******************************************************************************
* PepperoniPizza.h
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

class PepperoniPizza : public Pizza {
public:	
	// CONSTRUCTOR
	/**
	 *
	 */
	PepperoniPizza(PizzaIngredientFactory *pizzaIngredientFactory);

	// DESTRUCTOR
	/**
	 *
	 */
	~PepperoniPizza();

	// MANIPULATORS
	virtual void prepare() override;

private:
	// MEMBERS
	/**
	 * abstract factory that creates the family of ingredients.
	 */
	PizzaIngredientFactory *mPizzaIngredientFactory;
};

#endif // PEPPERONI_PIZZA_H