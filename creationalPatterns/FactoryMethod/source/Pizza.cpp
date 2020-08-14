/*******************************************************************************
* Pizza.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Pizza.h"				// Header from this implementation file.
#include <iostream>

using std::cout;
using std::endl;

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
Pizza::Pizza() {
	mName = "Undefined pizza.";
	mDough = "Undefined dough";
	mSauce = "Undefined sauce";
}

void Pizza::prepare() {
	cout << "Preparing " << mName << endl;
	cout << "Tossing dough..." << endl;
	cout << "Adding souce..." << endl;
	cout << "Adding toppings:";
	for (std::list<std::string>::iterator it = mToppings.begin();
			it != mToppings.end(); ++it) {
		std::cout << " " << *it;
	}
	cout << "." << endl;
}

void Pizza::bake() {
	cout << "Bake for 25 minutes at 350 F" << endl;
}

void Pizza::cut() {
	cout << "Cutting the pizza in diagonal slices." << endl;
}

void Pizza::box() {
	cout << "Place pizza in official PizzaStore box." << endl;
}

std::string Pizza::getName(){
	return mName;
}