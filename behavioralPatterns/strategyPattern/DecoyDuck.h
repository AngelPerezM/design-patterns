//
// Created by grover on 24/6/20.
//

#ifndef DESIGNPATTERNS_DECOYDUCK_H
#define DESIGNPATTERNS_DECOYDUCK_H

#include "Duck.h"
#include "Behaviors/FlyNoWay.h"

class DecoyDuck : public Duck {
public:
	/**
	 * Constructor class.
	 * @param flyBehavior
	 */
	DecoyDuck(behavior::FlyBehavior *flyBehavior = new behavior::FlyNoWay);

	/**
	 * Displays information about the duck.
	 */
	virtual void display() override;
};

#endif //DESIGNPATTERNS_DECOYDUCK_H
