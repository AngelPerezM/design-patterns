//
// Created by grover on 24/6/20.
// Version 2.00
//

#ifndef DESIGNPATTERNS_FLYBEHAVIOR_H
#define DESIGNPATTERNS_FLYBEHAVIOR_H

namespace behavior {
	/**
	 * Interface that represents the fly behavior (strategy).
	 */
	class FlyBehavior {
	public:
		virtual ~FlyBehavior();
		virtual void fly() const = 0;
	};
}

#endif //DESIGNPATTERNS_FLYBEHAVIOR_H
