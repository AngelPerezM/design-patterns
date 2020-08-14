/*******************************************************************************
* ChicagoStylePepperoniPizza.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "ChicagoStylePepperoniPizza.h"		// Header from this implementation file.
#include <iostream>

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza() {
	mName = "Chicago Style Pepperoni Pizza";
	mDough = "Extra Thick Crust Dough";
	mSauce = "Plum Tomato Sauce";
	mToppings.list::push_back("Shredded Mozzarella Cheese");
	mToppings.list::push_back("Black Olives");
	mToppings.list::push_back("Spinach");
	mToppings.list::push_back("Eggplant");
	mToppings.list::push_back("Sliced Pepperoni");
}

ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza() {

}

void ChicagoStylePepperoniPizza::cut() {
	std::cout << "Cutting the pizza into square slices" << std::endl;
}	