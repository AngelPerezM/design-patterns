/*******************************************************************************
* NYStylePepperoniPizza.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "NYStylePepperoniPizza.h"		// Header from this implementation file.
#include <iostream>

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
NYStylePepperoniPizza::NYStylePepperoniPizza() {
	mName = "NY Style Pepperoni Pizza";
	mDough = "Thin Crust Dough";
	mSauce = "Marinara Sauce";
	mToppings.list::push_back("Grated Reggiano Cheese");
	mToppings.list::push_back("Sliced Pepperoni");
	mToppings.list::push_back("Garlic");
	mToppings.list::push_back("Onion");
	mToppings.list::push_back("Mushrooms");
	mToppings.list::push_back("Red Pepper");
}

NYStylePepperoniPizza::~NYStylePepperoniPizza(){

}

void NYStylePepperoniPizza::cut() {
	std::cout << "Cutting the pizza into square slices." << std::endl;
}