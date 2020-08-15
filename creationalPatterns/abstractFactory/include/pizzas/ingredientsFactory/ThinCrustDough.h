
#ifndef THIN_CRUST_DOUGH_H
#define THIN_CRUST_DOUGH_H

/*******************************************************************************
* ThinCrustDough.h
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
class ThinCrustDough : public Dough {

public:
	virtual std::string toString() override {
		return "Thin Crust Dough";
	};
};

#endif // THIN_CRUST_DOUGH_H