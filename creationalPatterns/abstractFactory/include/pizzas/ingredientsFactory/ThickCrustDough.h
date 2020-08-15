
#ifndef THICK_CRUST_DOUGH_H
#define THICK_CRUST_DOUGH_H

/*******************************************************************************
* ThickCrustDough.h
*
* Author: Ángel Pérez
*
* 15/08/2020 - Version 1 
*******************************************************************************/

/* Include section
*******************************************************************************/
#include <string>
#include "pizzas/ingredientsFactory/Dough.h"

/* Defines section
*******************************************************************************/
class ThickCrustDough : public Dough {

public:
	virtual std::string toString() override {
		return "ThickCrust style extra thick crust dough";
	};
};

#endif // THICK_CRUST_DOUGH_H