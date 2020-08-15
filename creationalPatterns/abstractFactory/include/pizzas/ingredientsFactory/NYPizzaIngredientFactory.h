
#ifndef N_Y_PIZZA_INGREDIENT_FACTORY_H
#define N_Y_PIZZA_INGREDIENT_FACTORY_H

/*******************************************************************************
* NYPizzaIngredientFactory.h
*
* Author: Ángel Pérez
*
* dd/mm/yyyy - Version 
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "pizzas/ingredientsFactory/PizzaIngredientFactory.h"

/* Defines section
*******************************************************************************/

class NYPizzaIngredientFactory : public PizzaIngredientFactory{
	// CONSTRUCTOR
	/**
	 *
	 */

	// DESTRUCTOR
	/**
	 *
	 */
	~NYPizzaIngredientFactory() {};

	// MANIPULATORS
	/**
	 *
	 */
	virtual Dough * createDough() override ;
	/**
	 *
	 */
	virtual Sauce * createSauce() override ;


};

#endif // N_Y_PIZZA_INGREDIENT_FACTORY_H