
#ifndef CHICAGO_PIZZA_INGREDIENT_FACTORY_H
#define CHICAGO_PIZZA_INGREDIENT_FACTORY_H

/*******************************************************************************
* ChicagoPizzaIngredientFactory.h
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

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory{
public:
	// CONSTRUCTOR
	/**
	 *
	 */

	// DESTRUCTOR
	/**
	 *
	 */
	~ChicagoPizzaIngredientFactory(){};

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

#endif // CHICAGO_PIZZA_INGREDIENT_FACTORY_H