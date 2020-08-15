/*******************************************************************************
* chicagoPizzaStore.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "ChicagoPizzaStore.h"			// Header from this implementation file
#include "pizzas/ingredientsFactory/ChicagoPizzaIngredientFactory.h"
										// Concrete factory.
#include "pizzas/CheesePizza.h"	
#include "pizzas/PepperoniPizza.h"

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
ChicagoPizzaStore::ChicagoPizzaStore() {

}

ChicagoPizzaStore::~ChicagoPizzaStore() {

}

Pizza * ChicagoPizzaStore::createPizza(std::string type) {
	PizzaIngredientFactory *ingredientFactory = new ChicagoPizzaIngredientFactory();
	Pizza * pizza = nullptr;

	if(type == "Cheese") {
		pizza = new CheesePizza(ingredientFactory);
		pizza->setName("Chicago Cheese Pizza");
	} else if (type == "Pepperoni") {
		pizza = new PepperoniPizza(ingredientFactory);
		pizza->setName("Chicago Pepperoni Pizza");
	} 
	return pizza;
}