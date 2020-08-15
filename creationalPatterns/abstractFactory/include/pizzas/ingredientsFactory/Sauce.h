#ifndef SAUCE_H
#define SAUCE_H

/*******************************************************************************
* Sauce.h
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

class Sauce{
public:
	// DESTRUCTOR
	/**
	 *
	 */
	virtual ~Sauce() {};

	// ACCESORS
	/**
	 *
	 */
	virtual std::string toString() = 0;
};

#endif // SAUCE_H