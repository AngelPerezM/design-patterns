/*******************************************************************************
* PepperoniPizza.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "pizzas/PepperoniPizza.h"		// Header from this implementation file.
#include <iostream>

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *pizzaIngredientFactory) :
	mPizzaIngredientFactory(pizzaIngredientFactory)
{
	mName = "Pepperoni Pizza";
}

PepperoniPizza::~PepperoniPizza(){
	delete pizzaIngredientFactory;
}

void PepperoniPizza::prepare() {
	// Calls to factory methods from the abstract factory.
	std::cout << "Preparing " << mName << ":" << std::endl;
	mDough = mPizzaIngredientFactory->createDough();
	mSauce = mPizzaIngredientFactory->createSouce();
}