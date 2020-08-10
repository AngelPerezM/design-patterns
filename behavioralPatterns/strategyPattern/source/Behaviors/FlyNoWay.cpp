//
// Created by grover on 24/6/20.
//

#include "Behaviors/FlyNoWay.h"
#include <iostream>


namespace behavior {
	FlyNoWay::~FlyNoWay() {
		// NOTHING
	}
	void FlyNoWay::fly() const {
		std::cout << "I can not fly!" << std::endl;
	}
}
