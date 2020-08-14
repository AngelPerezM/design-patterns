/*******************************************************************************
* ChicagoStyleCheesePizza.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "ChicagoStyleCheesePizza.h"		// Header from this implementation file.
#include <iostream>

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() {
	mName = "Chicago Style Deep Dish Cheese Pizza";
	mDough = "Extra Thick Crust Dough";
	mSauce = "Plum Tomato Sauce";
	mToppings.list::push_back("Shredded Mozzarella Cheese");
	mToppings.list::push_back("Black Olives");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza() {

}

void ChicagoStyleCheesePizza::cut() {
	std::cout << "Cutting the pizza into square slices" << std::endl;
}	