/*******************************************************************************
* ChicagoPizzaIngredientFactory.cpp
*
* Author: Ángel Pérez
*
* dd/mm/yyyy - Version 
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "pizzas/ingredientsFactory/ChicagoPizzaIngredientFactory.h"
#include "pizzas/ingredientsFactory/ThickCrustDough.h"
#include "pizzas/ingredientsFactory/MarinaraSauce.h"

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
Dough * ChicagoPizzaIngredientFactory::createDough() {
	return new ThickCrustDough();
}

Sauce * ChicagoPizzaIngredientFactory::createSauce() {
	return new MarinaraSauce();
}