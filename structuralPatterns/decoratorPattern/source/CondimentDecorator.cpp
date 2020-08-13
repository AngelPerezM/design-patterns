/*******************************************************************************
* CondimentDecorator.cpp

* Author: Ángel Pérez
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "CondimentDecorator.h"

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
CondimentDecorator::CondimentDecorator(Beverage *component) : mComponent(component) {

}

std::string CondimentDecorator::getDescription() {
	return mComponent->getDescription();
}

float CondimentDecorator::cost() {
	return mComponent->cost();
}