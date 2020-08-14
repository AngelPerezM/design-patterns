#ifndef PIZZA_H
#define PIZZA_H

/*******************************************************************************
* Pizza.h
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include <string>
#include <list>

/* Defines section
*******************************************************************************/

/**
 * Abstract class that defines the product to be created by the creators.
 */
class Pizza {
public:
	// DESTRUCTOR
	/**
	 *
	 */
	virtual ~Pizza() {};

	// MANIPULATORS
	/**
	 *
	 */
	virtual void prepare();
	/**
	 *
	 */
	virtual void bake();
	/**
	 *
	 */
	virtual void cut();
	/**
	 *
	 */
	virtual void box();

	// ACCESORS
	/**
	 *
	 */
	std::string getName();

protected:
	// CONSTRUCTOR
	/**
	 *
	 */	
	Pizza();

	std::string mName;
	std::string mDough;
	std::string mSauce;
	std::list <std::string> mToppings;
};

#endif // PIZZA_H