/*******************************************************************************
* .cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "NYPizzaStore.h"				// Creator class.
#include "ChicagoPizzaStore.h"			// Creator class.
#include <iostream>

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
int main() {
	// NY
	PizzaStore *pizzaStore = new NYPizzaStore();

	std::cout << std::endl;
	Pizza *pizza =  pizzaStore->createPizza("Cheese");	
	std::cout << pizza->getName() << ": " << std::endl; 
	pizza->prepare();
	delete pizza;

	std::cout << std::endl;
	pizza =  pizzaStore->createPizza("Pepperoni");
	std::cout << pizza->getName() << ": " << std::endl; 
	pizza->prepare();
	delete pizza;

	delete pizzaStore;

	// Chicago
	pizzaStore = new ChicagoPizzaStore();

	std::cout << std::endl;
	pizza =  pizzaStore->createPizza("Cheese");
	std::cout << pizza->getName() << ": " << std::endl; 
	pizza->prepare();
	delete pizza;

	std::cout << std::endl;
	pizza =  pizzaStore->createPizza("Pepperoni");
	std::cout << pizza->getName() << ": " << std::endl; 
	pizza->prepare();
	delete pizza;
	
	delete pizzaStore;
}