/*******************************************************************************
* StarbuzzCoffee.t.cpp
*
* Author: Ángel Pérez
*
* Module Description: Test program.
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Espresso.h"
#include "Decaf.h"
#include "Milk.h"
#include "Mocha.h"
#include <iostream>

using std::cout;
using std::endl;

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
int main () {
	Beverage *espresso = new Espresso();
	cout << espresso->getDescription() << " costs " << espresso->cost() << endl;

	Beverage *decaf = new Decaf();
	cout << decaf->getDescription() << " costs " << decaf->cost() << endl;

	espresso = 
		new Milk(
			new Mocha(espresso));
	cout << espresso->getDescription() << " costs " << espresso->cost() << endl;

	decaf = 
		new Mocha(
			new Milk(decaf));
	cout << decaf->getDescription() << " costs " << decaf->cost() << endl;
	/*				|
	 *				v 							^
	 |Mocha			getDescription()			|
									|			", Mocha"
									v 				|
	 	| Milk					getDescription()	", Milk"
												|		|
												V 		"Decaf Coffee"
	 		| Decaf 					getDescription()	|
	*/

	return 0;
}