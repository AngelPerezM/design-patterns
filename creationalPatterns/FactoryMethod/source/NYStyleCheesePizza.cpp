/*******************************************************************************
* NYStyleCheesePizza.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "NYStyleCheesePizza.h"		// Header from this implementation file.
#include <iostream>

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
NYStyleCheesePizza::NYStyleCheesePizza() {
	mName = "NY Style Sauce and Cheese Pizza";
	mDough = "Thin Crust Dough";
	mSauce = "Marinara Sauce";
	mToppings.list::push_back("Grated Reggiano Cheese");
}

NYStyleCheesePizza::~NYStyleCheesePizza() {

}