//
// Created by grover on 24/6/20.
//

#include "Duck.h"
#include <iostream>

Duck::Duck() {
	this->mFlyBehavior = nullptr;
}

Duck::~Duck() {
	delete this->mFlyBehavior;
}

void Duck::performFly() {
	this->mFlyBehavior->fly();
}

void Duck::setFlyBehavior(behavior::FlyBehavior *flyBehavior) {
	this->mFlyBehavior = flyBehavior;
}

void Duck::swim() {
	std::cout << "All ducks float, even decoys!" << std::endl;
}
