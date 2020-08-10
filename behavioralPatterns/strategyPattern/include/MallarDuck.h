//
// Created by grover on 24/6/20.
//

#ifndef DESIGNPATTERNS_MALLARDUCK_H
#define DESIGNPATTERNS_MALLARDUCK_H

#include "Duck.h"
#include "Behaviors/FlyWithWings.h"

class MallarDuck : public Duck {
public:
	/**
	 * Constructor class.
	 * @param flyBehavior
	 */
	MallarDuck(behavior::FlyBehavior *flyBehavior = new behavior::FlyWithWings);

	/**
	 * Prints information about the duck.
	 */
	virtual void display();
};


#endif //DESIGNPATTERNS_MALLARDUCK_H
