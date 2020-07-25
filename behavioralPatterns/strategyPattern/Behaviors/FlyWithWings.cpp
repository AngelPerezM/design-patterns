//
// Created by grover on 24/6/20.
//

#include "FlyWithWings.h"
#include <iostream>


namespace behavior {
	FlyWithWings::~FlyWithWings() {
		// NOTHING
	}
	void FlyWithWings::fly() const {
		std::cout << "I am flying with wings" << std::endl;
	}
}

