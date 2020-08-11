//
// Created by grover on 24/6/20..
//

#ifndef DESIGNPATTERNS_FLYNOWAY_H
#define DESIGNPATTERNS_FLYNOWAY_H

#include "FlyBehavior.h"

namespace behavior {
	/**
	 * Implements a fly behavior (concrete strategy).
	 */
	class FlyNoWay : public FlyBehavior {
	    public:
		~FlyNoWay();
		/**
		 * Implements the fly method.
		 */
		virtual void fly() const;
	};
}

#endif //DESIGNPATTERNS_FLYNOWAY_H
