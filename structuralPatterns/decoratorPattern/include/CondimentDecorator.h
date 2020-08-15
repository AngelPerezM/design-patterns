#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H

/*******************************************************************************
* CondimentDecorator.h
*
* Author: Ángel Pérez
*
* 13/08/2020 - Version 1.0
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "Beverage.h"				// Superclass

/* Defines section
*******************************************************************************/

/**
 * Abstract class that decorates the Bevarege component.
 */
class CondimentDecorator : public Beverage {
public:
    // DESTRUCTOR
    /**
     *
     */
    virtual ~CondimentDecorator () {};

    // ACCESORS
    /**
     *
     */
    virtual std::string getDescription() override;
    /**
     *
     */
    virtual float cost() override;

protected:
    // CONSTRUCTOR
    /**
     *
     */
    CondimentDecorator(Beverage *component);

    // MEMBERS
    /**
     *
     */
    Beverage *mComponent;

};

#endif // CONDIMENT_DECORATOR_H
