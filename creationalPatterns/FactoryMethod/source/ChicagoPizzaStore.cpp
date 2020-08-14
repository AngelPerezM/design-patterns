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
#include "ChicagoStyleCheesePizza.h"	// Concrete product.
#include "ChicagoStylePepperoniPizza.h"	// Concrete product.

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
ChicagoPizzaStore::ChicagoPizzaStore() {

}

ChicagoPizzaStore::~ChicagoPizzaStore() {

}

Pizza * ChicagoPizzaStore::createPizza(std::string type) {
	if(type == "Cheese") {
		return new ChicagoStyleCheesePizza();
	} else if (type == "Pepperoni") {
		return new ChicagoStylePepperoniPizza();
	} else {
		return nullptr;
	}

}