/*******************************************************************************
* NYPizzaIngredientFactory.cpp
*
* Author: Ángel Pérez
*
* dd/mm/yyyy - Version 
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "pizzas/ingredientsFactory/NYPizzaIngredientFactory.h"
#include "pizzas/ingredientsFactory/ThickCrustDough.h"
#include "pizzas/ingredientsFactory/MarinaraSauce.h"

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
Dough * NYPizzaIngredientFactory::createDough() {
	return new ThickCrustDough();
}

Sauce * NYPizzaIngredientFactory::createSauce() {
	return new MarinaraSauce();
}