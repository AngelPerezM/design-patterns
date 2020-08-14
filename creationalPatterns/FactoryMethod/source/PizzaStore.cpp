/*******************************************************************************
* PizzaStore.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "PizzaStore.h"				// Header from this implementation file.


/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/

PizzaStore::PizzaStore() {

}

Pizza * PizzaStore::orderPizza(std::string type) {
	Pizza *pizza = createPizza(type);
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}