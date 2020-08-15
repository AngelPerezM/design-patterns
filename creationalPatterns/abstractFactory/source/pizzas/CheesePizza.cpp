/*******************************************************************************
* pizzas/CheesePizza.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "pizzas/CheesePizza.h"		// Header from this implementation file.
#include <iostream>

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
CheesePizza::CheesePizza(PizzaIngredientFactory *pizzaIngredientFactory) :
	mPizzaIngredientFactory(pizzaIngredientFactory)
{
	mName = "Cheese Pizza";
}

CheesePizza::~CheesePizza() {
	delete mPizzaIngredientFactory;
}

void Cheese::prepare() {
	// Calls to factory methods from the abstract factory.
	std::cout << "Preparing " << mName << ":" << std::endl;
	mDough = mPizzaIngredientFactory->createDough();
	mSauce = mPizzaIngredientFactory->createSouce();
}