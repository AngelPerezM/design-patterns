//
// Created by grover on 24/6/20.
//

#include "MallarDuck.h"
#include <iostream>

MallarDuck::MallarDuck(behavior::FlyBehavior *flyBehavior) {
	this->setFlyBehavior(flyBehavior);
}

void MallarDuck::display() {
	std::cout << "I am a mallar duck" << std::endl;
}

