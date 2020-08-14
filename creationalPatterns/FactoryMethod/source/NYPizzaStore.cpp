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
#include "NYStyleCheesePizza.h"			// Concrete product.
#include "NYStylePepperoniPizza.h"		// Concrete product.

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
NYPizzaStore::NYPizzaStore() {

}

NYPizzaStore::~NYPizzaStore() {

}

Pizza * NYPizzaStore::createPizza(std::string type) {
	if(type == "Cheese") {
		return new NYStyleCheesePizza();
	} else if (type == "Pepperoni") {
		return new NYStylePepperoniPizza();
	} else {
		return nullptr;
	}

}