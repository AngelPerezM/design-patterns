//
// Created by grover on 24/6/20.
//

#ifndef DESIGNPATTERNS_FLYWITHWINGS_H
#define DESIGNPATTERNS_FLYWITHWINGS_H

#include "FlyBehavior.h"

namespace behavior {
	/**
	 * Implements a fly behavior (concrete strategy).
	 */
	class FlyWithWings : public FlyBehavior {
		~FlyWithWings();
		/**
		 * Implements the fly method.
		 */
		virtual void fly() const override;
	};
}

#endif //DESIGNPATTERNS_FLYWITHWINGS_H
