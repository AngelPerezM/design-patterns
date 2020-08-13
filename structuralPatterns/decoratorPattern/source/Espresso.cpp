/*******************************************************************************
* Espresso.cpp
*
* Author: Ángel Pérez
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Espresso.h"

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/

Espresso::Espresso() {
	Beverage::description = "Espresso";
}

Espresso::~Espresso() {

}

float Espresso::cost() {
	return 0.89;	// 0.89 is the cost for the Espresso (only).
}