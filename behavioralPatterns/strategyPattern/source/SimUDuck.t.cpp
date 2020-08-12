//
// Created by grover on 25/6/20.
//

#include <iostream>
#include "DecoyDuck.h"
#include "MallarDuck.h"

using std::endl;

int main() {
	std::cout << "Strategy Pattern test:" << std::endl;
	Duck *pDecoyDuck = new DecoyDuck();
	std::cout << "display(): ";
	pDecoyDuck->display();
	std::cout << "swim(): ";
	pDecoyDuck->swim();
	std::cout << "performFly(): ";
	pDecoyDuck->performFly();
	std::cout << endl;
	
	std::cout << "setFlyBehavior(FlyWithWings)." << endl;
	pDecoyDuck->setFlyBehavior(new behavior::FlyWithWings);
	std::cout << "display(): ";
	pDecoyDuck->display();
	std::cout << "swim(): ";
	pDecoyDuck->swim();
	std::cout << "performFly(): ";
	pDecoyDuck->performFly();
	std::cout << endl;

	Duck *pMallarDuck = new MallarDuck();
	std::cout << "display(): ";
	pMallarDuck->display();
	std::cout << "swim(): ";
	pMallarDuck->swim();
	std::cout << "performFly(): ";
	pMallarDuck->performFly() ;
	std::cout << endl << "End of test." << endl;

	delete pDecoyDuck;
	delete pMallarDuck;

	return 0;
}
