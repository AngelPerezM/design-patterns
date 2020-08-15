/*******************************************************************************
* NYPizzaStore.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "NYPizzaStore.h"				// Header from this implementation file
#include "pizzas/ingredientsFactory/NYPizzaIngredientFactory.h"
										// Concrete factory.
#include "pizzas/CheesePizza.h"
#include "pizzas/PepperoniPizza.h"

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
NYPizzaStore::NYPizzaStore() {

}

NYPizzaStore::~NYPizzaStore() {

}

/**
 * factory method
 */
Pizza * NYPizzaStore::createPizza(std::string type) {
	// passes a concrete abstract factory to the pizza type.
	PizzaIngredientFactory *ingredientFactory = new NYPizzaIngredientFactory();
	Pizza * pizza = nullptr;

	if(type == "Cheese") {
		pizza = new CheesePizza(ingredientFactory);
		pizza->setName("NY Cheese Pizza");
	} else if (type == "Pepperoni") {
		pizza = new PepperoniPizza(ingredientFactory);
		pizza->setName("NY Pepperoni Pizza");
	} 
	return pizza;
}