//
// Created by grover on 24/6/20.
//

#ifndef DESIGNPATTERNS_DUCK_H
#define DESIGNPATTERNS_DUCK_H

#include "Behaviors/FlyBehavior.h"

class Duck {
public:
	/**
	 * @brief Destructor class.
	 * This class deletes/de-allocates reserved memory.
	 */
	virtual ~Duck();
	/**
	 * Performs the fly action.
	 */
	void performFly();
	/**
	 * This method sets the strategy member from the "Strategy design pattern"
	 * @param flyBehavior represents the strategy object.
	 */
	void setFlyBehavior(behavior::FlyBehavior *flyBehavior);
	/**
	 * Swim action.
	 */
	void swim();
	/**
	 * Displays information about the duck.
	 */
	virtual void display() = 0;
	protected:
	/**
	 * Constructor class
	 */
	Duck();
	private:
	/**
	 * Represents the strategy from the "Strategy design "
	 */
	behavior::FlyBehavior *mFlyBehavior;
};

#endif //DESIGNPATTERNS_DUCK_H
