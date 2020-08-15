/*******************************************************************************
* pizzas/Pizza.cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "pizzas/Pizza.h"				// Header from this implementation file.
#include <iostream>

using std::cout;
using std::endl;

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
Pizza::Pizza() {
	mName = "Undefined pizza.";
	mDough = nullptr;
	mSauce = nullptr;
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

void Pizza::setName(std::string const name) {
	this->mName = name;
}