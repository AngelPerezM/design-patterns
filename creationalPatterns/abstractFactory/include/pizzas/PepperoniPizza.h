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
#include "pizzas/PizzaIngredientFactory.h"

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
};

#endif // PEPPERONI_PIZZA_H