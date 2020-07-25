//
// Created by grover on 24/6/20.
//

#include "Duck.h"
#include <iostream>

Duck::Duck() {
	this->mFlyBehavior = nullptr;
}

Duck::~Duck() {
	if(this->mFlyBehavior != nullptr)
		delete this->mFlyBehavior;
}

void Duck::performFly() {
	this->mFlyBehavior->fly();
}

void Duck::setFlyBehavior(behavior::FlyBehavior *flyBehavior) {
	delete this->mFlyBehavior;
	this->mFlyBehavior = flyBehavior;
}

void Duck::swim() {
	std::cout << "All ducks float, even decoys!" << std::endl;
}
