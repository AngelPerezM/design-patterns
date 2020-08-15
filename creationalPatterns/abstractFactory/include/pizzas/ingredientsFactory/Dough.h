#ifndef DOUGH_H
#define DOUGH_H

/*******************************************************************************
* Dough.h
*
* Author: Ángel Pérez
*
* 15/08/2020 - Version 1 
*******************************************************************************/

/* Include section
*******************************************************************************/
#include <string>

/* Defines section
*******************************************************************************/

class Dough{

	// DESTRUCTOR
	/**
	 *
	 */
	virtual ~Dough() {};

	// ACCESORS
	/**
	 *
	 */
	virtual std::string toString() = 0;
};

#endif // DOUGH_H