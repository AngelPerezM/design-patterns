/*******************************************************************************
* Mocha.cpp

* Author: Ángel Pérez
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Mocha.h"

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/

Mocha::Mocha(Beverage *component) : CondimentDecorator(component) {

}

Mocha::~Mocha() {

}

std::string Mocha::getDescription() {
	return CondimentDecorator::getDescription() + ", Mocha";
}

float Mocha::cost() {
	return CondimentDecorator::cost() + 0.20 /* .10 = cost of mocha. */;
}