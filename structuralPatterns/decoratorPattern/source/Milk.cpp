/*******************************************************************************
* Milk.cpp

* Author: Ángel Pérez
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Milk.h"

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/

Milk::Milk(Beverage *component) : CondimentDecorator(component) {

}

Milk::~Milk() {

}

std::string Milk::getDescription() {
	return CondimentDecorator::getDescription() + ", Milk";
}

float Milk::cost() {
	return CondimentDecorator::cost() + 0.10 /* .10 = cost of milk. */;
}