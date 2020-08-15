
#ifndef PLUM_TOMATO_SAUCE_H
#define PLUM_TOMATO_SAUCE_H

/*******************************************************************************
* PlumTomatoSauce.h
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
class PlumTomatoSauce : public Sauce {

public:
	virtual std::string toString() override {
		return "Plum Tomato Sauce";
	};
};

#endif // MARINARA_H