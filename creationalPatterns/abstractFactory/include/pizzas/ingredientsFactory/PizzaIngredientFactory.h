#ifndef PIZZA_INGREDIENT_FACTORY_H
#define PIZZA_INGREDIENT_FACTORY_H

/*******************************************************************************
* PizzaIngredientFactory.h
*
* Author: Ángel Pérez
*
* dd/mm/yyyy - Version 
*******************************************************************************/

/* Include section
*******************************************************************************/

/* Defines section
*******************************************************************************/

class PizzaIngredientFactory {
public:
	// DESTRUCTOR
	/**
	 *
	 */
	virtual ~PizzaIngredientFactory() {};

	// MANIPULATORS
	/**
	 *
	 */
	virtual void createDough() = 0;
	/**
	 *
	 */
	virtual void createSauce() = 0;

};

#endif // PIZZA_INGREDIENT_FACTORY_H