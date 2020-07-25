//
// Created by grover on 25/6/20.
//

#include <iostream>
#include "DecoyDuck.h"
#include "MallarDuck.h"

int main() {
	std::cout << "Strategy Pattern test:" << std::endl;
	Duck *pDecoyDuck = new DecoyDuck();
	pDecoyDuck->display();
	pDecoyDuck->swim();
	pDecoyDuck->performFly();

	Duck *pMallarDuck = new MallarDuck();
	pMallarDuck->display();
	pMallarDuck->swim();
	pMallarDuck->performFly();

	return 0;
}
