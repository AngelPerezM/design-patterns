
#ifndef MARINARA_SAUCE_H
#define MARINARA_SAUCE_H

/*******************************************************************************
* MarinaSauce.h
*
* Author: Ángel Pérez
*
* 15/08/2020 - Version 1 
*******************************************************************************/

/* Include section
*******************************************************************************/
#include <string>
#include "pizzas/ingredientsFactory/Sauce.h"

/* Defines section
*******************************************************************************/
class MarinaraSauce : public Sauce {

public:

	~MarinaraSauce() {};

	virtual std::string toString() override {
		return "Marinara Sauce";
	};
};

#endif // MARINARA_H