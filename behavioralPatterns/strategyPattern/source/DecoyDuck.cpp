//
// Created by grover on 24/6/20.
//

#include "DecoyDuck.h"
#include <iostream>


DecoyDuck::DecoyDuck(behavior::FlyBehavior *flyBehavior) {
    setFlyBehavior(flyBehavior);
}

void DecoyDuck::display() {
	std::cout << "I am a decoy duck" << std::endl;
}

